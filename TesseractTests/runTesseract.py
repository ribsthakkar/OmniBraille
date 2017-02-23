from PIL import Image
import pytesseract
import time
import difflib

im = Image.open("redColorMod.jpg")# opening image file
im = im.save('test.tif')
im = Image.open('test.tif')# change image format
im.load()
im.split()# arduino = serial.Serial('/dev/tty.usbmodemFA131', 9600, timeout = 2)# open connection to serial port
time.sleep(2)
text = pytesseract.image_to_string(im)# run Tesseract library to convert image to string# arduino.write(text)
print "=====output=======\n"
print text
