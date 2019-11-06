#include<iostream>
#include<math.h>
#include<Windows.h>
#include"Point.h"
using namespace std;
int main() {
	Point* arry = new Point[10];
	Point arrray[10] = {};
	int a = 0;
	while (true)
	{
	cout << "请输入一个你想知道的第几个点的两点之间距离" << endl;
	cin >> a;
	if (a <= 9 && a >= 0) {
		break;
	}
	else
	{
		cout << "输入的值需要在0到9之间超出范围" << endl;
	}
	}

	cout << "请为这个点x,y分别赋值" << endl;
	int x,x1;
	cout << "请为第二点赋值" << endl;
	int y,y1;
	cin >> x >> y;
	cin >> x1 >> y1;
	arrray[a-1] = Point(x, y);
	arry[a-1] = Point(x1, y1);

	GetLength(arry[a], arrray[a]);

	


	system("pause");

		delete []arry;
}