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
    image_file = inputPic
    im = Image.open(image_file)# opening image file
    im = im.save('test.tif')
    im = Image.open('test.tif')# change image format
    im.load()
    im.split()# arduino = serial.Serial('/dev/tty.usbmodemFA131', 9600, timeout = 2)# open connection to serial port
    time.sleep(2)
    text = pytesseract.image_to_string(im)# run Tesseract library to convert image to string# arduino.write(text)
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
        runTesseract(image)
if __name__ == "__main__":
    main()
