#include "Stuents.h"
#include<iostream>
using namespace std;

Stuents::Stuents(char *name, char *id, int age, char* string)
{
	this->name = name;
	this->age = age;
	this->id = id;
	this->string = string;

}
Stuents::Stuents(const Stuents &r) {
	if (r.name != NULL) {
		int len = strlen(r.name);
		this->name = new char[len + 1];
		strcpy(this->name, r.name);
	}
	if (r.id!=NULL) {
		int len = strlen(r.id);
		this->id= new char[len + 1];
		strcpy(this->id, r.id);
	}
	if (r.string != NULL) {
		int len = strlen(r.string);
		this->string = new char[len + 1];
		strcpy(this->string, r.string);
	}
	this->age = r.age;
}

void Stuents::modifyname(char *name) {
	this->name = name;

}

void Stuents::modifyid(char *id) {
	this->id = id;
}
void Stuents::modifystring(char *string) {
	this->string = string;
}
void Stuents::modifyage(int age) {
	this->age = age;
}
void Stuents::display() {
	cout << "������" << name << endl;
	cout << "ѧ����" << id << endl;
	cout << "סַ��" << string << endl;
	cout << "������" << age << endl;

}

Stuents::~Stuents()
{
	delete[]name, id, string;

}