#include "Point.h"
#include<iostream>
#include<math.h>
using namespace std;


Point::Point()
{
}
Point::Point(double a, double b) {
	x = a;
	y = b;

}

Point::Point(const Point &r) {
	x = r.x;
	y = r.y;
}

double Point::GetX() {
	cout << "the x is " << x << endl;
	return x;
}

double Point::GetY() {
	cout << "the y is " << y << endl;
	return y;
}
void Point::SetX(double ax) {
	this->x = ax;
}
void Point::SetY(double bx) {
	this->y = bx;
}

void Point::SwapAxis(double *xa, double *xb) {
	double* tem;
	tem = xa;
	xa = xb;
	xb = tem;
}

Point::~Point()
{

	printf("执行析构函数");
}



double GetLength(Point &A, Point &B) {
	double length = 0;
	length = sqrt(pow((A.x - B.x),2)+ pow((A.y - B.y), 2));
	cout << "两个点之间距离是" << length << endl;
	return length;
}