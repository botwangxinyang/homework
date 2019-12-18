#pragma once
#include<iostream>
using namespace std;

class Shapes
{
public:
	Shapes() {
	};
	~Shapes() {
	};
	virtual void display() = 0;
};

class Rectangle :public Shapes {
public:
	Rectangle() {

	}

	~Rectangle() {
		
	}

	void display() {
		cout << "i am rectangle" << endl;
	}
};


class Circle :public Shapes {
public:
	Circle() {

	}
	~Circle()
	{

	}
	void display() {
		cout << "i am circle " << endl;

	}
};