#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    cout << "Hello, OpenCV!" << endl;
    Mat image = imread("../lena.png");
    if (image.empty()) {
        cout << "Could not open or find the image!" << endl;
        return -1;
    }
    Mat ImageGray, hist_equalized_image;
    //灰度图
    cvtColor(image,ImageGray,COLOR_BGR2GRAY);
    //直方图
    equalizeHist(ImageGray,hist_equalized_image);

    String SrcImage = "Src Image";
    String GrayImage = "Gray Image";
    String HistEqualizesImage = "HistEqualizes Image";

    namedWindow(SrcImage, WINDOW_NORMAL);
    namedWindow(GrayImage, WINDOW_NORMAL);
    namedWindow(HistEqualizesImage,WINDOW_NORMAL);

    imshow(SrcImage, image);
    imshow(GrayImage, ImageGray);
    imshow(HistEqualizesImage,hist_equalized_image);

    waitKey(0);
    destroyAllWindows();
    return 0;
}
