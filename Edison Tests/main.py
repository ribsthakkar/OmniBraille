# Debugging options
VERBOSE = True
SHOW_IMAGE = True

import subprocess
import signal
import sys
import time
import cv2
from PIL import Image#, ImageFilter
import pytesseract
import mraa
#import numpy as np
#from matplotlib import pyplot as plt
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

    root_mat = cv2.getRotationMatrix2D(center, angle, 1)
    rows, cols = image.shape
    rotated = cv2.warpAffine(image, root_mat, (cols, rows), flags=cv2.INTER_CUBIC)

    return cv2.getRectSubPix(rotated, (cols, rows), center)
#Executing the tesseract algorithm on image taken from camera
def runTesseract(inputPic):
    image_file = cv2.imread(inputPic)
    orig = image_file.copy()
    #print "deskewing image..."
    #deskewed_image = deskew(orig, compute_skew(orig))
    #print "removing image noise..."
    print "denoising colored image"
    orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
    print "converting image to BW"
    gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
    print "denoising BW image"
    gray = cv2.fastNlMeansDenoising(gray,None,3,7,21)
    cv2.imwrite("dst.jpg",gray)
    tess_file = 'dst.jpg'
    im = Image.open(tess_file) #opening image file
    im = im.save('test.tif')
    im = Image.open('test.tif') #change image format
    im.load()
    im.split()
    print "running tesseract..."
    text = pytesseract.image_to_string(im)
    print "=====output=======\n"
    print text
    return text
#function to raise and lower pins depending on letter
def setPin(letPin):
    sol6 = mraa.Gpio(6)
    sol6.dir(mraa.DIR_OUT)
    sol5 = mraa.Gpio(5)
    sol5.dir(mraa.DIR_OUT)
    sol4 = mraa.Gpio(4)
    sol4.dir(mraa.DIR_OUT)
    sol3 = mraa.Gpio(3)
    sol3.dir(mraa.DIR_OUT)
    sol2 = mraa.Gpio(2)
    sol2.dir(mraa.DIR_OUT)
    sol1 = mraa.Gpio(1)
    sol1.dir(mraa.DIR_OUT)
    digPin = 6
    sol1.write(abs(1 - letPin[0]))
    sol2.write(abs(1 - letPin[1]))
    sol3.write(abs(1 - letPin[2]))
    sol4.write(abs(1 - letPin[3]))
    sol5.write(abs(1 - letPin[4]))
    sol6.write(abs(1 - letPin[5]))
#function to call which letter to set on the Solenoid Pins
def outputLetter(inputText):
    while (len(inputText) > 0):
        char1 = inputText[0]
        print char1
        if (char1 == "A"
            or char1 == "a"):
            setPin([1, 0, 0, 0, 0, 0])
        if (char1 == "B"
            or char1 == "b"):
            setPin([1, 1, 0, 0, 0, 0])
        if (char1 == "C"
            or char1 == "c"):
            setPin([1, 0, 0, 1, 0, 0])
        if (char1 == "D"
            or char1 == "d"):
            setPin([1, 0, 0, 1, 1, 0])
        if (char1 == "E"
            or char1 == "e"):
            setPin([1, 0, 0, 0, 1, 0])
        if (char1 == "F"
            or char1 == "f"):
            setPin([1, 1, 0, 1, 0, 0])
        if (char1 == "G"
            or char1 == "g"):
            setPin([1, 1, 0, 1, 1, 0])
        if (char1 == "H"
            or char1 == "h"):
            setPin([1, 1, 0, 0, 1, 0])
        if (char1 == "I"
            or char1 == "i"):
            setPin([0, 1, 0, 0, 1, 0])
        if (char1 == "J"
            or char1 == "j"):
            setPin([0, 1, 0, 1, 1, 0])
        if (char1 == "K"
            or char1 == "k"):
            setPin([1, 0, 1, 0, 0, 0])
        if (char1 == "L"
            or char1 == "l"):
            setPin([1, 1, 1, 0, 0, 0])
        if (char1 == "M"
            or char1 == "m"):
            setPin([1, 0, 1, 1, 0, 0])
        if (char1 == "N"
            or char1 == "n"):
            setPin([1, 0, 1, 1, 1, 0])
        if (char1 == "O"
            or char1 == "o"):
            setPin([1, 0, 1, 0, 1, 0])
        if (char1 == "P"
            or char1 == "p"):
            setPin([1, 1, 1, 1, 0, 0])
        if (char1 == "Q"
            or char1 == "q"):
            setPin([1, 1, 1, 1, 1, 0])
        if (char1 == "R"
            or char1 == "r"):
            setPin([1, 1, 1, 0, 1, 0])
        if (char1 == "S"
            or char1 == "s"):
            setPin([0, 1, 1, 1, 0, 0])
        if (char1 == "T"
            or char1 == "t"):
            setPin([0, 1, 1, 1, 1, 0])
        if (char1 == "U"
            or char1 == "u"):
            setPin([1, 0, 1, 0, 0, 1])
        if (char1 == "V"
            or char1 == "v"):
            setPin([1, 1, 1, 0, 0, 1])
        if (char1 == "W"
            or char1 == "w"):
            setPin([0, 1, 0, 1, 1, 1])
        if (char1 == "X"
            or char1 == "x"):
            setPin([1, 0, 1, 1, 0, 1])
        if (char1 == "Y"
            or char1 == "y"):
            setPin([1, 0, 1, 1, 1, 1])
        if (char1 == "Z"
            or char1 == "z"):
            setPin([1, 0, 1, 0, 1, 1])
        if (char1 == "#"):
            setPin([0, 0, 1, 1, 1, 1])
        if (char1 == "."):
            setPin([0, 1, 0, 0, 1, 1])
        if (char1 == ","):
            setPin([0, 1, 0, 0, 0, 0])
        if (char1 == "?"):
            setPin([0, 1, 1, 0, 0, 1])
        if (char1 == "!"):
            setPin([0, 1, 1, 0, 1, 0])
        if (char1 == ";"):
            setPin([0, 1, 1, 0, 0, 0])# command = 'c1%s' % char1# arduino.write(command)# write each character of the string onto the serial port
        time.sleep(5)
        inputText = inputText[1:]
        setPin([1, 1, 1, 1, 1, 1])
        time.sleep(1.5)
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
        output = runTesseract(image)
        ouptutLetter(output)
if __name__ == "__main__":
    main()
