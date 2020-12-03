#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;
int main(void)
{
    Mat img;
    string path = "../img/LENA.jpg";
    img = imread(path, IMREAD_COLOR); // IMREAD_GRAY

    namedWindow("Display", WINDOW_AUTOSIZE);
    imshow("Display",img);
    waitKey(0);

    return 0;

}