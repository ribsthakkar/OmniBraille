from PIL import Image
import pytesseract

image_file = 'unnamed.jpg'
im = Image.open(image_file) #opening image file
im = im.save('test.tif')
im = Image.open('test.tif') #change image format
im.load()
im.split()
text = pytesseract.image_to_string(im)
print "=====output=======\n"
print text
