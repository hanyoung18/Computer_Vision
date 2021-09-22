#include "cv.hpp"
#include<iostream>
#include<cmath>
using namespace std;
using namespace cv;

int main() {
	Mat lena_img = imread("Lena.png"), lena_filtered;
	Mat moon_img = imread("moon.png", 0), laplacian, abs_laplacian, moon_filtered;
	Mat saltnpepper = imread("saltnpepper.png",0), saltnpepper_filtered;
	/*blur(lena_img, lena_filtered, Size(7, 7));
	imshow("lena", lena_img);
	imshow("lena_filtered", lena_filtered);
	imshow("moon", moon_img);
	GaussianBlur(moon_img, moon_img,Size(3,3),0,0,BORDER_DEFAULT);
	Laplacian(moon_img,laplacian,CV_16S,1,1,0);
	convertScaleAbs(laplacian, abs_laplacian);
	moon_filtered = abs_laplacian + moon_img;
	imshow("moon_filtered", moon_filtered);*/

	imshow("saltnpepper", saltnpepper);
	medianBlur(saltnpepper, saltnpepper_filtered, 9);
	imshow("saltnpepper_filtered", saltnpepper_filtered);
	waitKey(0);
}