import cv2
import sys

#read input image
image = cv2.imread("../assets/anish.jpg", cv2.IMREAD_GRAYSCALE)

#define canny params
lowThreshold = 50
highTHreshold = 150
#you can choose aperture size as 3 or 5 or 7
apertureSize=3

#apply canny
output = cv2.Canny(image, lowThreshold, highTHreshold, apertureSize=apertureSize)

#create windows to display images
cv2.namedWindow("image", cv2.WINDOW_AUTOSIZE)
cv2.namedWindow("canny", cv2.WINDOW_AUTOSIZE)

#display images
cv2.imshow("image", image)
cv2.imshow("canny", output)

#press esc to exit the program
cv2.waitKey(0)

#close all the opened windows
cv2.destroyAllWindows()