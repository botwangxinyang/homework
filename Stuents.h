#pragma once
class Stuents
{
private:
	char *name;
	char *id;
	int age;
	char *string;

public:
	Stuents();
	Stuents(char *name, char *id, int age, char* string);
	Stuents(const Stuents &r);
	void get(char *name, char* id);
	void modifyname(char *name);
	void modifyid(char *id);
	void modifyage(int age);
	void modifystring(char *string);
	void display();
	 

	~Stuents();
};
