#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
#include <Windows.h>

using namespace std;

//Ex_1 ������
//class Time {
//public:
//	int hour;
//	int minute;
//	Time(int h, int m) {
//		hour = h;
//		minute = m;
//	}
//	void print() {
//		cout << hour << ":" << minute << endl;
//	}
//};
//Lab1 ������
//class Rectangle {
//	int width, height;
//public:
//	Rectangle(int w, int h);
//	int calcArea();
//};
//
//Rectangle::Rectangle(int w, int h) {
//	width = w;
//	height = h;
//}
//
//int Rectangle::calcArea() {
//	return width * height;
//}
//Ex_2�Ҹ���
//class MyString {
//private:
//	char* s;
//	int size;
//public:
//	MyString(const char* c) { //�����ڿ��� ���� �޸𸮸� �Ҵ�޾Ƽ� ���ڿ��� �����ϰ� �ִ�.
//		size = strlen(c) + 1;
//		s = new char[size];
//		strcpy(s, c);
//	}
//	~MyString() { //�Ҹ��ڿ��� ���� �޸𸮸� ��ȯ�ϰ� �ִ�.
//		delete[]s;
//	}
//};
//Lab3
//class Rectangle {
//	int width, height;
//public:
//	Rectangle(int w, int h); // ������
//	int calcArea(); // ���� ��� �Լ�
//};
//
//Rectangle::Rectangle(int w, int h) { // �����ڸ� �ܺο� ������
//	width = w;
//	height = h;
//}
//
//int Rectangle::calcArea() {
//	return width * height;
//}

int main() {

	//Ex_1 ������
	//Time a;
	//Time b(10, 25);
	//Time c{ 10,25 };
	//Time d = { 10, 25 };
	//Lab1 ������
	//b.print();
	//c.print();
	//d.print();
	//Rectangle r( 3, 4 );
	//cout << "�簢���� ���� : " << r.calcArea() << '\n';
	//Ex_2�Ҹ���
	//MyString str("abcdefghijk");
	//Lab3
	//Rectangle r(3, 4);
	//cout << "�簢���� ���� : " << r.calcArea() << '\n';
	return 0;
}