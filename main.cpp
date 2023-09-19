#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{

    Mat image;
    image = imread("C:/Users/darsa/OneDrive/Pictures/Saved Pictures/krook_1.jpg");
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_NORMAL );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}
