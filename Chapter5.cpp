#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
#include <Windows.h>

using namespace std;

//Ex_1 생성자
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
//Lab1 생성자
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
//Ex_2소멸자
//class MyString {
//private:
//	char* s;
//	int size;
//public:
//	MyString(const char* c) { //생성자에서 동적 메모리를 할당받아서 문자열을 저장하고 있다.
//		size = strlen(c) + 1;
//		s = new char[size];
//		strcpy(s, c);
//	}
//	~MyString() { //소멸자에서 동적 메모리를 반환하고 있다.
//		delete[]s;
//	}
//};
//Lab3
//class Rectangle {
//	int width, height;
//public:
//	Rectangle(int w, int h); // 생성자
//	int calcArea(); // 면적 계산 함수
//};
//
//Rectangle::Rectangle(int w, int h) { // 생성자를 외부에 정의함
//	width = w;
//	height = h;
//}
//
//int Rectangle::calcArea() {
//	return width * height;
//}

int main() {

	//Ex_1 생성자
	//Time a;
	//Time b(10, 25);
	//Time c{ 10,25 };
	//Time d = { 10, 25 };
	//Lab1 생성자
	//b.print();
	//c.print();
	//d.print();
	//Rectangle r( 3, 4 );
	//cout << "사각형의 넓이 : " << r.calcArea() << '\n';
	//Ex_2소멸자
	//MyString str("abcdefghijk");
	//Lab3
	//Rectangle r(3, 4);
	//cout << "사각형의 넓이 : " << r.calcArea() << '\n';
	return 0;
}