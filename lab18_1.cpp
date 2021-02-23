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