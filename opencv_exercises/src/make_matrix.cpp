#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

void createMatrix1()
{
    int rows = 480, cols = 640;
    cv::Mat mat1;
    mat1.create(rows, cols, CV_8UC1);
    mat1.setTo(cv::Scalar(255));

    string windowName = "Hello CV";
    cv::imshow(windowName, mat1);
    cv::waitKey(0);
}

int main()
{
    createMatrix1();

    return 0;
}