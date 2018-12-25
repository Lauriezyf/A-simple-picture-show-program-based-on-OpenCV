#include<opencv2/opencv.hpp>  
#include<iostream>  
using namespace std;  
using namespace cv;  
int main()  
{  
	 Mat image=imread("/Users/lauriezyf/Documents/Entertainment/Picture/YOI_poster2.png");  
	  namedWindow("Victor & Yuri");  
	  imshow("Victor & Yuri",image);  
	  waitKey();  
	  return 0;  
}  
