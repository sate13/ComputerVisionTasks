#ifndef MAIN_H
#define MAIN_H

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <stdio.h>

using namespace cv;

Mat integralImage(Mat input);

//Main method
int main( int argc, const char** argv );

#endif // MAIN_H
