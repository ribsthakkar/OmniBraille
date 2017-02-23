import cv2
from PIL import Image
import skewTest as skew
"""
inputPic = "8size.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("8sizeMod.jpg",gray)

inputPic = "12size.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("12sizeMod.jpg",gray)

inputPic = "16size.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("16sizeMod.jpg",gray)
"""
inputPic = "tnrFont.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("tnrFontMod.jpg",gray)

inputPic = "courierFont.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("courierFontMod.jpg",gray)

inputPic = "arialFont.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("arialFontMod.jpg",gray)

inputPic = "blackColor.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("blackColorMod.jpg",gray)

inputPic = "blueColor.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("blueColorMod.jpg",gray)

inputPic = "redColor.jpg"
image_file = cv2.imread(inputPic)
orig = image_file.copy()
print "denoising color"
orig = cv2.fastNlMeansDenoisingColored(orig,None,10,10,7,21)
#cv2.imwrite("colorDenoised.jpg",orig)
print "converting to BW"
gray = cv2.cvtColor(orig, cv2.COLOR_BGR2GRAY)
#cv2.imwrite("BWconverted.jpg",gray)
print "denosing BW"
gray = cv2.fastNlMeansDenoising(gray,None,10,7,21)
#cv2.imwrite("bwDenoised.jpg",gray)
#print "deskwing image"
#deskewed_image = skew.deskew(gray, skew.compute_skew(gray))
cv2.imwrite("redCololMod.jpg",gray)
