#pragma once
class Point
{
public:
	Point();
	Point(double a, double b);
	Point(const Point &r);
	~Point();
	double GetX();
	double GetY();
	void SetX(double ax);
	void SetY(double bx);
	void SwapAxis(double *xa, double *xb);

	friend double GetLength(Point &A, Point &B);
private:
	double x;
	double y;

};
double GetLength(Point &A, Point &B);
