# Debugging options
VERBOSE = True
SHOW_IMAGE = True

import subprocess
import signal
import sys
import time
import cv2
from PIL import Image
import pytesseract
import pinTest as pt
# Webcam manufacturer
WEBCAM_MAKE = 'Logitech'

# Camera resolution
CAMERA_WIDTH = 1280
CAMERA_HEIGHT = 720

# Exit on a ctrl+c event
def signalHandler(signal, frame):
    if VERBOSE:
        print "Exiting..."
    sys.exit(0)
# Wait for the webcam to show up in the USB devices list
def waitForCamera():
        while True:

                # Parse the `lsusb` command
                proc = subprocess.Popen(['lsusb'], stdout=subprocess.PIPE)
                out = proc.communicate()[0]
                lines = out.split('\n')

                # Look for the webcam manufacturer
                for line in lines:
                        if WEBCAM_MAKE in line:
                                if VERBOSE:
                                    print "Camera found!"
                                time.sleep(1.0)
                                return
                if VERBOSE:
                    print "Waiting for camera..."
                time.sleep(1.0)
#calculating skew angle
def compute_skew(image):
    # image = cv2.bitwise_not(image)
    nslice, height, width = image.shape

    edges = cv2.Canny(image, 150, 200, 3, 5)
    lines = cv2.HoughLinesP(edges, 1, np.pi / 180, 100, minLineLength=width / 2.0, maxLineGap=20)
    angle = 0.0
    number_of_line = lines.size
    for x1, y1, x2, y2 in lines[0]:
        if x1 != x2:
            angle += np.arctan(y2 - y1 / x2 - x1)
    return angle / number_of_line
#deskewing the image from calcualted angle
def deskew(image, angle):
    angle = np.math.degrees(angle)
    # image = cv2.bitwise_not(image)
    non_zero_pixels = cv2.findNonZero(image)
    center, wh, theta = cv2.minAreaRect(non_zero_pixels)

    root_mat = cv2.getRotationMatrix2D(center, -1* angle, 1)
    rows, cols = image.shape
    rotated = cv2.warpAffine(image, root_mat, (cols, rows), flags=cv2.INTER_CUBIC)

    return cv2.getRectSubPix(rotated, (cols, rows), center)
#modify image and run tesseract
def runTesseract(inputPic):
    image_file = cv2.imread(inputPic)
    orig = image_file.copy()
    print "denoising colored image..."
    orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
    print "converting image to BW"
    gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
    print "denoising BW image"
    gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
    #print "deskewing image"
    #gray = deskew(gray,compute_skew(gray))
    cv2.imwrite("dst.jpg",gray)
    tess_file = 'dst.jpg'
    im = Image.open(tess_file) #opening image file
    im = im.save('test.tif')
    im = Image.open('test.tif') #change image format
    im.load()
    im.split()
    print "running tesseract..."
    text = pytesseract.image_to_string(im)
    return text
###############################################################################
# Main
###############################################################################
def main():
    # Register Ctrl+C
    signal.signal(signal.SIGINT, signalHandler)
    # Wait for the webcam to finish initializeing
    waitForCamera()
    # Main loop
    while True:
        #initialize camera
        print "Reintializing Camera in 5 seconds"
        time.sleep(5)
        cam = cv2.VideoCapture(0)
        cam.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, CAMERA_WIDTH)
        cam.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, CAMERA_HEIGHT)
        camWidth = cam.get(cv2.cv.CV_CAP_PROP_FRAME_WIDTH)
        camHeight = cam.get(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT)
        if VERBOSE:
            print "Camera initialized: (" + str(camWidth) + ", " + \
                str(camHeight) + ")  Image will be taken in 5 seconds"
        # Get image from camera
        time.sleep(5)
        print "taking image....."
        ret_val, frame = cam.read()
        print "saving image...."
        image = "testImage.jpg"
        cv2.imwrite(image,frame)
        cam.release()
        # Show image window (if debugging)
        print "preparing to run image modification"
        time.sleep(3)
        text = runTesseract(image)
        print "=====output=======\n"
        print text
        pt.outputLetter(text)
if __name__ == "__main__":
    main()
