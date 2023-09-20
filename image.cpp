#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
//using namespace std;

Mat blur(Mat image, std::string blur_type, int ksize = 3){
    Mat output_image;
    if (blur_type == "gaussian"){
        GaussianBlur(image, output_image,Size(ksize,ksize),0);
    }
    else if (blur_type == "median")
    {
        medianBlur(image,output_image,ksize);
    }
    else{
        output_image = image;
    }
    
    
    return output_image;
}



int main(int argc, char** argv ){
    Mat image, image_processed;
    image = imread("C:/Users/darsa/OneDrive/Pictures/Saved Pictures/garchomp.jpg");
    if (!image.data){
        std::cout<<"No image data";
        return -1;
    }
    std::string blur_type = "none";
    //resize(image,image_down,Size(56,79),INTER_LINEAR);
    image_processed = blur(image,blur_type,7);
    cvtColor(image,image_processed,COLOR_BGR2GRAY);
    threshold(image_processed,image_processed,111,255,THRESH_BINARY_INV);
    namedWindow("Display image", WINDOW_AUTOSIZE);
    imshow("Display image", image_processed);
    waitKey(0);
    return 0;
    }

