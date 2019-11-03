#include<iostream>
#include<math.h>
#include<Windows.h>
#include"Stuents.h"
#include <cstdlib>
using namespace std;

int main() {
	char* id = new char[20];
	char* name = new char[20];
	int age;
	char* string = new char[30];
	int a;
	int b;
	cout << "请输入名字" << endl;
	cin >> name;
	cout << "请输入学号" << endl;
	cin >> id;
	cout << "请输入年龄" << endl;
	cin >> age;
	cout << "请输入住址" << endl;
	cin >> string;

	Stuents message(name, id, age, string);

	while (true)
	{
	cout << "是否要修改信息，修改姓名输入1，修改学号输入2，修改年龄输入3，修改住址输入4，不修改输入0" << endl;
	cin >> a;
	if (a == 1) {
		message.modifyname(name);
	}
	else if (a == 2) {
		message.modifyid(id);
	}
	else if (a == 3) {
		message.modifyage(age);
	}
	else if (a == 4) {
		message.modifystring(string);
	}
	else if (a == 0) {
		break;
	}
	
	}

	cout << "是否展示各信息，输入1展示" << endl;
	cin >> b;
	if (b == 1) {
		message.display();
	}









	system("pause");
	return 0;
}