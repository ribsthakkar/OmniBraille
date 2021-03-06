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
def runTesseract(inputPic):
    image_file = cv2.imread(inputPic)
    orig = image_file.copy()
    orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
    gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
    gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
    cv2.imwrite("dst.jpg",gray)
    tess_file = 'dst.jpg'
    im = Image.open(tess_file) #opening image file
    im = im.save('test.tif')
    im = Image.open('test.tif') #change image format
    im.load()
    im.split()
    text = pytesseract.image_to_string(im)
    print "=====output=======\n"
    print text
###############################################################################
# Main
###############################################################################
def main():

    # Register Ctrl+C
    signal.signal(signal.SIGINT, signalHandler)

    # Wait for the webcam to finish initializeing
    waitForCamera()

    # Initialize camera
    """cam = cv2.VideoCapture(0)
    cam.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, CAMERA_WIDTH)
    cam.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, CAMERA_HEIGHT)
    camWidth = cam.get(cv2.cv.CV_CAP_PROP_FRAME_WIDTH)
    camHeight = cam.get(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT)
    if VERBOSE:
        print "Camera initialized: (" + str(camWidth) + ", " + \
            str(camHeight) + ")"
            """

    # Main loop
    while True:
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
        ret_val, frame = cam.read()
        image = "testImage.jpg"
        cv2.imwrite(image,frame)
        cam.release()
        # Show image window (if debugging)
        print "running tesseract..."
        runTesseract(image)
if __name__ == "__main__":
    main()
