#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

void changePixels()
{
    int rows = 480, cols = 640;
    cv::Mat mat1;
    mat1.create(rows, cols, CV_8UC1);
    mat1.setTo(cv::Scalar(0));
    for(int r=230;r<250;r++)
    {
        for(int c=0; c<cols;c++)
        {
            mat1.at<u_int8_t>(r,c) =255;
        }
    }

    string windowName = "change value";
    cv::imshow(windowName, mat1);
    cv::waitKey(0);
}

int main()
{
    changePixels();

    return 0;
}