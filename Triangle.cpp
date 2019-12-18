#include "Triangle.h"
#include<iostream>
#include<math.h>
using namespace std;




 Triangle::Triangle(double a, double b, double c) {
	 a = a;
	 b = b;
	 c = c;
}
 Triangle::Triangle(Triangle const &a) {
	 this->a = a.a;
	 this->b = a.b;
	 this->c = a.c;
 }
 //�������캯��
 double Triangle::area() {
	 double p;
	 double area;
	 p = (a + b + c) / 2;
	 area = sqrt(p*(p - a)*(p - b)*(p - c));
	 return area;

 }
 //�����������
 void Triangle::circulate() {
	 double circulate;
	 circulate = a + b + c;

	 cout << "the circulate is" << circulate << endl;
 }
 //���������ܳ�
 Triangle Triangle::operator +(Triangle a) {
	 Triangle temp;
	 double area1;
	 area1= a.area()+temp.area();
	 return area1;
 }
 //����+��

 Triangle Triangle::operator=(Triangle b) {
	 this->a = b.a;
	 this->b = b.b;
	 this->c = b.c;
	 return *this;
	 
 }

Triangle::~Triangle()
{
}
