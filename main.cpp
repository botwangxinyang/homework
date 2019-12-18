#include<iostream>
#include<math.h>
#include"Shapes.h"
using namespace std;

void whatinmage(Shapes *p) {
	p->display();
}

int main() {
	Circle a;
	Rectangle b;
	int number;
	cout << "what imagines do you want to know ?" << endl;
	cout << "if you want to know the circle ,please press out 1.if you want to know the rectangle, please press out 2." << endl;
	cin >> number;
	if (number == 1) {
		whatinmage(&a);
	}
	else if(number==2)
	{
		whatinmage(&b);
	}
	else
	{
		cout << "wrong" << endl;
	}




	system("pause");
	return 0;
}