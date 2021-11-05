#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(int, char **)
{
    Mat in_frame;
    const char win1[]="Grabbing...";
    double fps=30;//每秒的帧数

    VideoCapture inVid(0) ; //打开默认摄像机
    if ( !inVid.isOpened () ) { //检查错误
        cout << "Error! Camera not ready...\n";
        return -1;
    }
    //获取输入视频的宽度和高度
    int width = (int)inVid.get(CAP_PROP_FRAME_WIDTH);
    int height = (int)inVid.get(CAP_PROP_FRAME_HEIGHT);
    //为原始视频和最终视频创建两个窗口
    namedWindow(win1);
    while (true) {
        //从摄像机读取帧（抓取并解码）
        inVid >> in_frame;
        imshow (win1, in_frame);// 在窗口中显示帧
        if (waitKey(1000/fps) >= 0)
            break;
    }
    inVid.release(); // 关闭摄像机
    return 0;
}