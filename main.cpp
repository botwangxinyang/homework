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
	cout << "����������" << endl;
	cin >> name;
	cout << "������ѧ��" << endl;
	cin >> id;
	cout << "����������" << endl;
	cin >> age;
	cout << "������סַ" << endl;
	cin >> string;

	Stuents message(name, id, age, string);

	while (true)
	{
	cout << "�Ƿ�Ҫ�޸���Ϣ���޸���������1���޸�ѧ������2���޸���������3���޸�סַ����4�����޸�����0" << endl;
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

	cout << "�Ƿ�չʾ����Ϣ������1չʾ" << endl;
	cin >> b;
	if (b == 1) {
		message.display();
	}









	system("pause");
	return 0;
}