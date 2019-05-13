#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(){

    //Read input image
    Mat image = imread("../assets/anish.jpg", IMREAD_GRAYSCALE);

    Mat output;

    //Define canny params
    int lowThreshold = 50;
    int highTHreshold = 130;
    //You can choose aperture size as 5 or 7 also
    int apertureSize = 3;

    GaussianBlur(image, image, Size(3, 3), 0, 0);

    //Apply canny
    Canny(image, output, lowThreshold, highTHreshold, apertureSize);

    //create windows to display images
    namedWindow("image", WINDOW_AUTOSIZE);
    namedWindow("canny", WINDOW_AUTOSIZE);

    //display images
    imshow("image", image);
    imshow("canny", output);

    //Press esc to exit the program
    waitKey(0);

    //close all the opened windows
    destroyAllWindows();

    return 0;
}