#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat canny_edges(Mat image){
    Mat edges;
    Canny(image,edges,100,255);
    return edges;

}

int main(){
    Mat image, image_gray;
    double thresh = 0;
    image = imread("C:/Users/darsa/OneDrive/Pictures/Saved Pictures/garchomp.jpg");


    cvtColor(image, image_gray, COLOR_BGR2GRAY);

    threshold(image_gray,image_gray,thresh,255,THRESH_BINARY+THRESH_OTSU);



    namedWindow("edges", WINDOW_AUTOSIZE );
    imshow("edges", canny_edges(image_gray));
    waitKey(0);
    return 0;
}