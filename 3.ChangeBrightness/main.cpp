#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

/*
int main() {
    cout << "Hello, World!" << endl;
    Mat image = imread("../lena.png");
    if (image.empty()) {
        cout << "Could not open or find the image" << endl;
    }


    // void Mat::convertTo( OutputArray m, int rtype, double alpha=1, double beta=0 ) const
    //This function converts the each pixel value to the target data type and changes the value as per the following formula.
    //pixel_value_of_output_image(x, y) = pixel_value_of_input_image(x, y) * alpha + beta;
    //    · m - Output image. This data structure will be reallocated if required.
    //    · rtype - Type of the output image. If rtype is a negative value, the type of the output image will be same as the input image.
    //    · alpha - Each pixels in the input image will be multiplied by this number before assigning to the output image.
    //    · beta - This value will be added to each pixels in the input image and assigned to the output image.

    Mat imageBrightnessHigh50;
    image.convertTo(imageBrightnessHigh50, -1, 1, 50);//增加亮度


    Mat ImageBrightnessLow100;
    image.convertTo(ImageBrightnessLow100, -1, 1, -100);//降低亮度

    //窗口名
    String WinOriginalImage = "Original Image";
    String WinBrightnessHigh50Image = "Brightness Increased by 50";
    String WinBrightnessLow100Image = "Brightness Decreased by 100";

    //创建窗口
    namedWindow(WinOriginalImage, WINDOW_NORMAL);
    namedWindow(WinBrightnessHigh50Image, WINDOW_NORMAL);
    namedWindow(WinBrightnessLow100Image, WINDOW_NORMAL);

    //显示窗口
    imshow(WinOriginalImage, image);
    imshow(WinBrightnessHigh50Image, imageBrightnessHigh50);
    imshow(WinBrightnessLow100Image, ImageBrightnessLow100);

    //等待销毁窗口
    waitKey(0);
    destroyAllWindows();
    return 0;
}
*/

int main(int argc, char *argv[]) {
    cout << "Hello OpenCV" << endl;
    VideoCapture InVid(0);
    if (!InVid.isOpened()) {
        cout << "Could not open the capture!" << endl;
        return -1;
    }
    String WinOriginalVideo = "Original video";
    String WinBrightHigh50Video = "BrightHigh50 video";

    namedWindow(WinOriginalVideo, WINDOW_NORMAL);
    namedWindow(WinBrightHigh50Video, WINDOW_NORMAL);


    while (true) {
        Mat frame,frameBrigntHigh50;
        InVid >> frame;
        frame.convertTo(frameBrigntHigh50,-1,1,50);
        imshow(WinOriginalVideo, frame);
        imshow(WinBrightHigh50Video, frameBrigntHigh50);
        if (waitKey(10) == 27) {
            cout << "ESC key is pressed by user. Stopping the video" << endl;
            break;
        }
    }
    InVid.release();
    destroyAllWindows();
    return 0;
}

