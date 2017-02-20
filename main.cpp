#include <QCoreApplication>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Mat src = imread("Image_124.png");
    Mat croppedImage;

    int xposition, yposition;

    xposition = src.cols/3;
    yposition = src.rows/2;
    Vec3b Pixel;

    int xstart;
    int xend;
    int ystart;
    int yend;

    vector<int> xvector, yvector;

    for(int i = 0; i < src.cols; i++)
    {
        for(int j = yposition; j < yposition+1; j++)
        {
            if(src.at<Vec3b>(j,i)[1]==255)
            {
                xvector.push_back(i);
            }
        }
    }

    for(int i = xposition; i < xposition+1; i++)
    {
        for(int j = 0; j < src.rows; j++)
        {
            if(src.at<Vec3b>(j,i)[1] == 255)
            {
                yvector.push_back(j);
            }
        }
    }


    xstart = xvector[0];
    xend =  xvector[xvector.size()-1];

    ystart = yvector[0];
    yend =  yvector[yvector.size()-1];

    Rect cropRegion((xstart-2),(ystart-2),(xend-xstart+4),(yend-ystart+4));
    cv::Mat(src,cropRegion).copyTo(croppedImage);


    imshow("Cropped Image",croppedImage);
    return a.exec();
}

