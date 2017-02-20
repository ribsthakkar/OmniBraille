# Debugging options
VERBOSE = True
SHOW_IMAGE = True

import subprocess
import signal
import sys
import time
import cv2
from PIL import Image, ImageFilter
import pytesseract
import mraa
import numpy as np
from matplotlib import pyplot as plt
# Webcam manufacturer
WEBCAM_MAKE = 'Logitech'

# Camera resolution
CAMERA_WIDTH = 1280
CAMERA_HEIGHT = 720

#Arrays of Braille Letters
letA = [1, 0, 0, 0, 0, 0]
letB = [1, 1, 0, 0, 0, 0]
letC = [1, 0, 0, 1, 0, 0]
letD = [1, 0, 0, 1, 1, 0]
letE = [1, 0, 0, 0, 1, 0]
letF = [1, 1, 0, 1, 0, 0]
letG = [1, 1, 0, 1, 1, 0]
letH = [1, 1, 0, 0, 1, 0]
letI = [0, 1, 0, 0, 1, 0]
letJ = [0, 1, 0, 1, 1, 0]
letK = [1, 0, 1, 0, 0, 0]
letL = [1, 1, 1, 0, 0, 0]
letM = [1, 0, 1, 1, 0, 0]
letN = [1, 0, 1, 1, 1, 0]
letO = [1, 0, 1, 0, 1, 0]
letP = [1, 1, 1, 1, 0, 0]
letQ = [1, 1, 1, 1, 1, 0]
letR = [1, 1, 1, 0, 1, 0]
letS = [0, 1, 1, 1, 0, 0]
letT = [0, 1, 1, 1, 1, 0]
letU = [1, 0, 1, 0, 0, 1]
letV = [1, 1, 1, 0, 0, 1]
letW = [0, 1, 0, 1, 1, 1]
letX = [1, 0, 1, 1, 0, 1]
letY = [1, 0, 1, 1, 1, 1]
letZ = [1, 0, 1, 0, 1, 1]
letPound = [0, 0, 1, 1, 1, 1]
letPer = [0, 1, 0, 0, 1, 1]
letComm = [0, 1, 0, 0, 0, 0]
letQuest = [0, 1, 1, 0, 0, 1]
letSemi = [0, 1, 1, 0, 0, 0]
letExec = [0, 1, 1, 0, 1, 0]
reset = [1, 1, 1, 1, 1, 1]

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
    height, width = image.shape

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
    orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
    gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
    gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
    deskewed_image = deskew(gray, compute_skew(gray))
    cv2.imwrite("dst.jpg",deskewed_image)
    tess_file = 'dst.jpg'
    im = Image.open(tess_file) #opening image file
    im = im.filter(ImageFilter.SHARPEN)
    im = im.save('test.tif')
    im = Image.open('test.tif') #change image format
    im.load()
    im.split()
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
            setPin(letA)
        if (char1 == "B"
            or char1 == "b"):
            setPin(letB)
        if (char1 == "C"
            or char1 == "c"):
            setPin(letC)
        if (char1 == "D"
            or char1 == "d"):
            setPin(letD)
        if (char1 == "E"
            or char1 == "e"):
            setPin(letE)
        if (char1 == "F"
            or char1 == "f"):
            setPin(letF)
        if (char1 == "G"
            or char1 == "g"):
            setPin(letG)
        if (char1 == "H"
            or char1 == "h"):
            setPin(letH)
        if (char1 == "I"
            or char1 == "i"):
            setPin(letI)
        if (char1 == "J"
            or char1 == "j"):
            setPin(letJ)
        if (char1 == "K"
            or char1 == "k"):
            setPin(letK)
        if (char1 == "L"
            or char1 == "l"):
            setPin(letL)
        if (char1 == "M"
            or char1 == "m"):
            setPin(letM)
        if (char1 == "N"
            or char1 == "n"):
            setPin(letN)
        if (char1 == "O"
            or char1 == "o"):
            setPin(letO)
        if (char1 == "P"
            or char1 == "p"):
            setPin(letP)
        if (char1 == "Q"
            or char1 == "q"):
            setPin(letQ)
        if (char1 == "R"
            or char1 == "r"):
            setPin(letR)
        if (char1 == "S"
            or char1 == "s"):
            setPin(letS)
        if (char1 == "T"
            or char1 == "t"):
            setPin(letT)
        if (char1 == "U"
            or char1 == "u"):
            setPin(letU)
        if (char1 == "V"
            or char1 == "v"):
            setPin(letV)
        if (char1 == "W"
            or char1 == "w"):
            setPin(letW)
        if (char1 == "X"
            or char1 == "x"):
            setPin(letX)
        if (char1 == "Y"
            or char1 == "y"):
            setPin(letY)
        if (char1 == "Z"
            or char1 == "z"):
            setPin(letZ)
        if (char1 == "#"):
            setPin(letPound)
        if (char1 == "."):
            setPin(letPer)
        if (char1 == ","):
            setPin(letComm)
        if (char1 == "?"):
            setPin(letQuest)
        if (char1 == "!"):
            setPin(letExec)
        if (char1 == ";"):
            setPin(letSemi)# command = 'c1%s' % char1# arduino.write(command)# write each character of the string onto the serial port
        time.sleep(5)
        inputText = inputText[1:]
        setPin(reset)
        time.sleep(1.5)
###############################################################################
# Main
###############################################################################
def main():

    # Register Ctrl+C
    signal.signal(signal.SIGINT, signalHandler)

    # Wait for the webcam to finish initializeing
    waitForCamera()

    # Initialize camera
    cam = cv2.VideoCapture(0)
    cam.set(cv2.cv.CV_CAP_PROP_FRAME_WIDTH, CAMERA_WIDTH)
    cam.set(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT, CAMERA_HEIGHT)
    camWidth = cam.get(cv2.cv.CV_CAP_PROP_FRAME_WIDTH)
    camHeight = cam.get(cv2.cv.CV_CAP_PROP_FRAME_HEIGHT)
    if VERBOSE:
        print "Camera initialized: (" + str(camWidth) + ", " + \
            str(camHeight) + ")"

    # Main loop
    while True:

        # Get image from camera
        time.sleep(5)
        ret_val, frame = cam.read()
        image = "testImage.jpg"
        cv2.imwrite(image,frame)
        # Show image window (if debugging)
        print "running tesseract..."
        ouptut = runTesseract(image)
        #ouptutLetter(output)
if __name__ == "__main__":
    main()
