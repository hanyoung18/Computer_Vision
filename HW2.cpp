/*#include "cv.hpp"
#include<iostream>
#include<cmath>
using namespace std;
using namespace cv;
int main() {
	Mat img = imread("Lena.png", 0), log_img, gamma_img;
	log_img = img.clone(); //clone the img to log_img
	gamma_img = img.clone(); //clone the img to gamma_img
	imshow("Input image", img);
	imshow("negative_img", 255- img);// show the negative image by  255-img
	gamma_img.convertTo(gamma_img, CV_32F); //convert the type of gamma_img from CV_8U to CV_32F for using function pow
	log_img.convertTo(log_img, CV_32F);//convert the type of log_img from CV_8U to CV_32F for using function log

	for (int i = 0; i < log_img.rows; i++) {
		for (int j = 0; j < log_img.cols; j++) {
			log_img.at<float>(i, j) = log(1+log_img.at<float>(i, j));
		}
	}
	//convert value of each pixel to log(1+ value of each pixel)
	normalize(gamma_img, gamma_img, 0, 1, NORM_MINMAX); //normalize the gamma_img from 0 to 1.
	for (int i = 0; i < gamma_img.rows; i++) {
		for (int j = 0; j < gamma_img.cols; j++) {
			gamma_img.at<float>(i, j) = pow(gamma_img.at<float>(i, j),0.5);
		}
	}
	//convert value of each pixel to value of each pixel^0.5
	normalize(log_img, log_img, 0, 255, NORM_MINMAX); //normalize log_img from 0 to 255 to apply to fuction imshow.
	convertScaleAbs(log_img, log_img, 1.5, 0.0); //according to the formula alpha value is 1.5 and convertScaleAbs function is change the type CV_32F to CV_8U.
	
												 /*I think that the convertScaleAbs function should be used before using the normalize function,
	but in that case, the result is different from the ppt, so this order was applied.
	Because the most similar result was found by randomly arranging the order,
	I don't understand why the normalize function should appear before the converScaleAbs function 
	*/
	
	/*normalize(gamma_img, gamma_img, 0, 255, NORM_MINMAX);//normalize normalize the gamma_img from 0 to 255 to apply to fuction imshow.
	gamma_img.convertTo(gamma_img, CV_8U); //convert the gamma_img from 0 to 255 to apply to fuction imshow.

	imshow("log_img", log_img);
	imshow("gamma_img", gamma_img);
	waitKey(0);
}
*/