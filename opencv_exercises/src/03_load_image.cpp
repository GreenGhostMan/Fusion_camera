#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

void loadImage()
{
    vector<cv::Mat> image_list;
    for(int i=4;i<9;i++)
    {
        ostringstream imgNumber;
        imgNumber << setfill('0') << setw(5) << i;
        string filename = "../img/" + imgNumber.str() + ".png";

        Mat img;
        img = imread(filename);
        image_list.push_back(img);
    }

    string windowName = "Vector & Mat";
    namedWindow(windowName,1);
    for(auto it=image_list.begin(); it!=image_list.end(); ++it)
    {
        imshow(windowName, *it);
        waitKey(0);
    }
}

int main(void)
{
    loadImage();

    return 0;
}