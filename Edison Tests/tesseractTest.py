from PIL import Image
import pytesseract
import cv2

image = cv2.imread('unnamed.jpg')
"""orig = image.copy()
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
cv2.imwrite("colorDenoised.jpg",orig)
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
cv2.imwrite("blackandwhiteDenoised.jpg",gray)
cv2.imwrite("dst.jpg",gray)"""
#cv2.namedWindow('Unfiltered Image', cv2.WINDOW_NORMAL)
#cv2.imshow('Unfiltered Image',image)
#cv2.waitKey(0)
print "Processing..."

# median filter - takes median from group of pixels
# mostly depends on kernel size
# median for sorted vector [1 1 2 2 2 3 4 5 5] is 2

# OpenCV median = cv2.medianBlur(src, ksize[, dst])

myIMG = cv2.medianBlur(image, 3)

#cv2.namedWindow('Processed Image', cv2.WINDOW_NORMAL)
#cv2.imshow('Processed Image', myIMG)
#cv2.waitKey(0)
cv2.imwrite('medianBlurredImage.jpg',myIMG)
biFil = cv2.bilateralFilter(myIMG,9,75,75)
cv2.imwrite('bilaterallyFilteredImage.jpg',biFil)
cv2.imwrite("dst.jpg",biFil)
print "Done!"
tess_file = 'dst.jpg'
im = Image.open(tess_file) #opening image file
im = im.save('test.tif')
im = Image.open('test.tif') #change image format
im.load()
im.split()
text = pytesseract.image_to_string(im)
print "=====output=======\n"
print text
