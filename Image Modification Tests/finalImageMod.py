import cv2
from PIL import Image
import skewTest as skew

inputPic = "testPic.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
cv2.imwrite("bwDenoised.jpg",gray)
print "deskwing image"
deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("deskewedImage.jpg",deskewed_image)
