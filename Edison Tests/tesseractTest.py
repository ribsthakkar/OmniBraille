from PIL import Image
import pytesseract
import cv2

image = cv2.imread('unnamed4.jpg')
orig = image.copy()
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
