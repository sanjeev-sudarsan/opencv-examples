#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
//using namespace std;

int main(int argc, char** argv ){
    Mat image, image_down;
    image = imread("C:/Users/darsa/OneDrive/Pictures/Saved Pictures/krook_1.jpg");
    if (!image.data){
        std::cout<<"No image data";
        return -1;
    }
    resize(image,image_down,Size(300,360),INTER_LINEAR);
    namedWindow("Display image", WINDOW_AUTOSIZE);
    imshow("Display image", image_down);
    waitKey(0);
    return 0;
    }