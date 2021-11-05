#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {

    Mat image = imread("../lena.png");
    if (image.empty()) {
        printf("Image not loaded");
        return -1;
    }
    imshow("image", image);
    waitKey(0);
    return 0;
}
