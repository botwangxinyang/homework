#include<iostream>
#include<cmath>
#include<Windows.h>
#include<string>

using namespace std;
const double PI = 3.1415;
int add(int x, int y) {
	return x + y;

}

void radius(double a) {
	int area = pow(a, 2)*PI;
	int meter = 2 * a*PI;

	cout << "the area is" << area << "the meter is " << meter << endl;
}
void injuist(int* ptr) {
	int zheng=0;
	int fu=0;
	for (int i = 0; i < 10; i++) {
		if (ptr[i] > 0) {
			zheng++;
		}
		else if (ptr[i] < 0) {
			fu++;
		}
		
	}

	cout << "有正数为" << zheng << endl;
	cout << "有负数为" << fu << endl;

}


float checkAgeScore(int age, float score) {
	float grade;
	grade = score * 20;
	if (age < 16|| age>25) {
		cout << "年龄错误" << endl;
		throw age;
	}
	if (score < 0 || score>5) {
		cout << "成绩错误" << endl;
		throw score;
	}
	return grade;
}
int main() {
//第五大题第一小问	
	int x;
	int y;
	int sum;
	printf("please input x and y:");
	cin >> x >> y;
	sum = add(x, y);
	cout<<x<<"+"<<y<<"="<<sum<< endl;


//第五大题第二小问
	printf("please in put a is radius");
		double a;
		cin >> a;
		radius(a);
//第五大题第三小问

		int * ptr;
		ptr = new int[10];
		for (int i = 0; i < 10; i++) {
			cin >> ptr[i];

		}

		injuist(ptr);
		
		delete [10]ptr;



//第五大题第四小问
		std::string name;
		int age;
		printf("please input your name");
			cin >> name;
			printf("please input your age");
			cin >> age;
			printf("please input your score");
			float score;
			cin >> score;
			try {
				cout << checkAgeScore(age, score) << endl;
			}
			catch (int) {
				cout << "your input is wrong" << endl;
			}
			catch (float) {
				cout << "your score is wrong" << endl;
			}
	getchar();
	system("pause");
}




