# Opencv[C++] 教程

## 一、读入、显示

包含头文件：

```c++
#include <opencv2/opencv.hpp>
#include <iostream> 
```

**opencv2/opencv.hpp**头文件本身将包含 OpenCV 库中所有其他必要的头文件。你必须只包含这个头文件才能编译你的 OpenCV 代码。



载入**OpenCV**的命名空间：

```c++
using namespace std;
using namespace cv;
```

所有 OpenCV 函数、类和数据结构都在**cv**命名空间内声明。因此，必须在程序顶部添加 **using namespace cv**行。否则必须在每个 OpenCV 函数、类和数据结构之前附加 **cv::**说明符。（例如 - cv::Mat、cv::imread() 等）



从文件夹“ */YourPath/lena.png* ”加载图像并将其作为 Mat 对象返回。并且校验一下该图片是否存在。

```c++
 // Read the image file
 Mat image = imread("/YourPath/lena.png");

 // Check for failure
 if (image.empty()) 
 {
  cout << "Could not open or find the image" << endl;
  cin.get(); //wait for any key press
  return -1;
 }
```

```c++
Mat imread(const String& filename, int flags = IMREAD_COLOR)
```

此函数从指定文件加载图像，并作为 Mat 对象返回。如果函数无法读取文件，它将返回一个空的 Mat 对象。

1. **filename** - 必须提供图像文件的相对或绝对路径。如果您提供相对路径，则它应该相对于您的 cpp 文件。始终支持 jpeg、jpg、bmp、png、tiff 和 tif 图像文件类型。支持其他图像文件类型，具体取决于您的平台和安装的编解码器。
2. **flags** -  参数有几个可能的值。默认的 IMREAD_COLOR 参数。

- - IMREAD_UNCHANGED - 图像将按原样加载。
  - IMREAD_GRAYSCALE - 图像将作为灰度图像加载（即 - 单通道图像，黑白图像）
  - IMREAD_COLOR - 图像将作为 BGR 图像加载（即 - 3 通道图像，彩色图像）

```c++
void namedWindow(const String& winname, int flags = WINDOW_AUTOSIZE)
namedWindow(windowName); // Create a window
```

此函数创建一个可用于放置图像和跟踪条的窗口。如果具有给定名称的窗口已存在，则此函数不执行任何操作。

1. **winname** - 窗口的名称。该名称将显示在新创建的窗口的标题栏中。此名称也是此窗口的标识符，将在以后的 OpenCV 函数调用中用于标识该窗口。
2. **flags** - 确定窗口的大小。默认的 WINDOW_AUTOSIZE 参数。

- - WINDOW_AUTOSIZE - 用户无法调整窗口大小。图像将以其原始尺寸显示。 
  - WINDOW_NORMAL- 用户可以调整窗口大小。

```c++
void imshow(const String& winname, InputArray mat)
imshow ( windowName , image ); // Show our image inside the created window.
```

此函数在由 winname 指定的窗口中显示图像。如果窗口是用 WINDOW_AUTOSIZE 标志创建的，图像将以其原始大小显示。否则图像可能会缩放到窗口的大小。如果尚未通过调用 namedWindow() 函数创建窗口，该函数将创建一个带有 WINDOW_AUTOSIZE 标志的窗口。

此函数调用之后应该是 waitKey(int) 函数调用，以便提供足够的时间在指定的持续时间（以毫秒为单位）在窗口中绘制和显示图像。如果不调用waitKey(int) 函数，图像将不会显示在窗口中。

1. **winname** - 由 namedWindow() 函数创建的窗口的名称。
2. **mat** - 保存图像的 Mat 对象



```c++
waitKey(0); // Wait for any keystroke in the window
destroyWindow(windowName); //destroy the created window
```

