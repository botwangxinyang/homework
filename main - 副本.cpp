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
	cout << "������һ������֪���ĵڼ����������֮�����" << endl;
	cin >> a;
	if (a <= 9 && a >= 0) {
		break;
	}
	else
	{
		cout << "�����ֵ��Ҫ��0��9֮�䳬����Χ" << endl;
	}
	}

	cout << "��Ϊ�����x,y�ֱ�ֵ" << endl;
	int x,x1;
	cout << "��Ϊ�ڶ��㸳ֵ" << endl;
	int y,y1;
	cin >> x >> y;
	cin >> x1 >> y1;
	arrray[a-1] = Point(x, y);
	arry[a-1] = Point(x1, y1);

	GetLength(arry[a], arrray[a]);

	


	system("pause");

		delete []arry;
}