#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double max(double a,double b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

double min(double a,double b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


double overlap(Rect *R1,Rect *R2){
	
	double x1 = max(R1->x,R2->x);
	double y1 = max(R1->y - R1->h,R2->y - R2->h);
	double x2 = min(R1->x + R1->w,R2->x + R2->w);
	double y2 = min(R1->y,R2->y);
	
	double width = x2 - x1;
	double height =y2 - y1;
	
	
	if(width > 0 and height > 0)
	{
		return width * height;
	}
	else
	{
		return 0;
	}


}