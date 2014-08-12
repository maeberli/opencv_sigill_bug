#include <iostream>
#include <signal.h>

#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/highgui/highgui.hpp"

int main( int argc, char **argv )
{
    cv::Mat img = cv::imread( argv[1] );
    
    cv::SurfFeatureDetector detector;
    std::vector<cv::KeyPoint> kp_img;
    detector.detect( img, kp_img );
    
    std::cout << "Number keypoints detected: " << kp_img.size() << std::endl;
    
    return 0;
}



