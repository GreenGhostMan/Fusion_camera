#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;
using namespace cv;

void loadImage()
{
    for(int i=4;i<=9;i++)
    {
        ostringstream imgNumber;
        imgNumber << setfill('0') << setw(5) << i;
        string filename = "../img/"+imgNumber.str()+ ".png";
        cout<<filename;
        Mat img;
        img = cv::imread(filename);
        string windowName = "OpenCV";
        cv::namedWindow(windowName, WINDOW_AUTOSIZE);
        cv::imshow(windowName, img);
        cv::waitKey(0);
    }   

}
int main(void)
{
   loadImage();
    return 0;

}