import cv2
from PIL import Image
import scipy
from scipy.ndimage import imread
im = Image.open("unnamed.jpg") #opening image file

im = im.save('test.tif')
im = Image.open('test.tif') #change image format
small = scipy.misc.imresize(im, 0.5)
im.save('adjustedimage.jpg')
gray = cv2.cvtColor(small,cv2.COLOR_BGR2GRAY)
blur = cv2.GaussianBlur(gray,(5,5),0)
edged = cv2.Canny(blur,75,200)
cv2.imshow("edged.jpg",edged)
#edged.save('adjustedimage.jpg')
(cnts,_) = cv2.findContours(edged.copy(), cv2.RETR_LIST,cv2.CHAIN_APPROX_SIMPLE)
cnts = sorted(cnts,key = cv2.contourArea,reverse = True)[:5]

for c in cnts:
    peri = cv2.arcLength(c,True)
    approx = cv2.approxPolyDP(c, 0.02*peri,True)
    if len(approx) == 4:
         screenCnt = approx
         break

print("finding contours of paper")
