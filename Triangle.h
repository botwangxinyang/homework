#pragma once
#include<iostream>
using namespace std;
class Triangle
{
private:
	double a;
	double b;
	double c;
	//�����ε�������

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
	out << "һ����Ϊ" << endl;
	out << a.a;
	out << "һ����Ϊ" << endl;
	out << a.b;
	out << "һ����Ϊ" << endl;
	out << a.c;
	out << endl;
	return out;
}
//����������ţ�����Ϊ��Ԫ����