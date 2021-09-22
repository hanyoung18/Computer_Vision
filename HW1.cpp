/*#include "cv.hpp"
#include<iostream>

using namespace std;
using namespace cv;

int main() {
	Mat frame;
	VideoCapture cap;

	if (cap.open("background.mp4") == 0) {
		cout << "no such file!" << endl;
		waitKey(0);
	}
	//Open the background.mp4 and if there is no file, print ¡°no such file.¡±
	int total_frames = cap.get(CAP_PROP_FRAME_COUNT);
	while (1) {
		if (cap.get(CAP_PROP_POS_MSEC) == 3000) { 
			waitKey(0);
		}
	//if the current position of the video file is 3000 milliseconds, stop the video. 3000 millieseconds equal to 3 seconds
		cap >> frame;
		if (frame.empty()) {
			cout << "end of video" << endl;
			waitKey(0);
		}
	//if the video has no frame, print "end of video"
		imshow("video", frame);
		cout << "Frames: " << cap.get(CAP_PROP_POS_FRAMES) << " / " << total_frames << endl;
		waitKey(cap.get(CAP_PROP_FPS));
	//Delay according to the frame speed.
	}
}*/


