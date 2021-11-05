#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    std::cout << "Hello, Opencv!" << std::endl;
    cv::Mat image = cv::imread("../lena.png");
    if (image.empty()) {
        std::cout << " Could not open or find the image";
        return -1;
    }
    cv::Mat imageContrastHigh2,imageContrastLow0_25;
    /*void Mat::convertTo( OutputArray m, int rtype, double alpha=1, double beta=0 ) const
    此函数将每个像素值转换为目标数据类型，并按照以下公式更改值。
     pixel_value_of_output_image(x, y) = pixel_value_of_input_image(x, y) * alpha + beta；
        · m - 输出图像。如果需要，将重新分配此数据结构。
        · rtype - 输出图像的类型。如果 rtype 为负值，则输出图像的类型将与输入图像的类型相同。
        · alpha - 在分配给输出图像之前，输入图像中的每个像素都将乘以这个数字。
        · beta - 此值将添加到输入图像中的每个像素并分配给输出图像。*/
    //alpha 改对比度 ； beta 改亮度
    image.convertTo(imageContrastHigh2, -1, 2, 0);
    image.convertTo(imageContrastLow0_25, -1, 0.25, 0);

    cv::String WinNameOriginalImage = "Original Image";
    cv::String WinNameContrastHigh2Image = "Contrast High2 Image";
    cv::String WinNameContrastLow0_25Image = "Contrast Low2 Image";


    cv::namedWindow(WinNameOriginalImage, cv::WINDOW_NORMAL);
    cv::namedWindow(WinNameContrastHigh2Image, cv::WINDOW_NORMAL);
    cv::namedWindow(WinNameContrastLow0_25Image, cv::WINDOW_NORMAL);


    cv::imshow(WinNameOriginalImage, image);
    cv::imshow(WinNameContrastHigh2Image, imageContrastHigh2);
    cv::imshow(WinNameContrastLow0_25Image, imageContrastLow0_25);

    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}
