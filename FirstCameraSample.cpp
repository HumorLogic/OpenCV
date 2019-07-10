#include "opencv2/opencv.hpp"
using namespace cv;
int main(int, char**)
{
	VideoCapture cap(0);
	if (!cap.isOpened())
		return -1;
	namedWindow("frame", cv::WINDOW_AUTOSIZE);
	for (;;)
	{
		Mat frameIn;
		cap >> frameIn;
		imshow("frame", frameIn);
		if (waitKey(30) >= 0) break;
	}
	return 0;
}