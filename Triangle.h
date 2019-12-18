#pragma once
#include<iostream>
using namespace std;
class Triangle
{
private:
	double a;
	double b;
	double c;
	//三角形的三条边

public:
	
	Triangle(double a = 3.0, double b = 4.0, double c = 5.0);
	Triangle(const Triangle &Triangle);
	double area();
	void circulate();
	Triangle operator +(Triangle a);
	 friend ostream & operator<<(ostream & out ,Triangle &a);
	Triangle operator = ( Triangle b);
	~Triangle();
};

ostream & operator<<(ostream & out, Triangle &a)
{
	out << "一条边为" << endl;
	out << a.a;
	out << "一条边为" << endl;
	out << a.b;
	out << "一条边为" << endl;
	out << a.c;
	out << endl;
	return out;
}
//重载输出符号，并且为友元函数