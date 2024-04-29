#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <Windows.h>
using namespace std;
//Ex_1, 2클래스
//class Circle {
//public:
//	int radius;
//	string color;
//
//	double calcArea() {
//		return 3.14 * radius * radius;
//	}
//};
//Lab1 클래스
//class Rectangle {
//public:
//	int width, height;
//	int calcArea() {
//		return width * height;
//	}
//};
//Lab2
//class Circle {
//public:
//	int x, y, radius;
//	string color;
//
//	double calcArea() {
//		return 3.14 * radius * radius;
//	}
//	void draw() {
//		HDC hdc = GetWindowDC(GetForegroundWindow());
//		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
//	}
//};
//Lab3
//class Car {
//public:
//	int speed;
//	int gear;
//	string color;
//
//	void speedUp() {
//		speed += 10;
//	}
//
//	void speedDown() {
//		speed -= 10;
//	}
//};
//Ex_3 클래스 인터페이스
//class Circle {
//public:
//	double calcArea();
//
//	int radius;	  // 반지름
//	string color; // 색상
//};
////클래스 외부에서 멤버 함수들이 정의된다.
//double Circle::calcArea() {
//	return 3.14 * radius * radius;
//}
//Lab4
//class Circle {
//public:
//	void init(int xval, int yval, int r);
//	void draw();
//	void move();
//private:
//	int x, y, radius;
//};
//
//void Circle::init(int xval, int yval, int r) {
//	x = xval;
//	y = yval;
//	radius = r;
//}
//
//void Circle::draw() {
//	HDC hdc = GetWindowDC(GetForegroundWindow());
//	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
//}
//
//void Circle::move() {
//	x += rand() % 50;
//}


int main() {
	//Ex_1클래스
	//Circle obj;

	//obj.radius = 100;
	//obj.color = "blue";

	//cout << "원의 면적=" << obj.calcArea() << "\n";
	//Ex_2클래스
	//Circle pizza1, pizza2;

	//pizza1.radius = 100;
	//pizza1.color = "yellow";
	//cout << "피자의 면적=" << pizza1.calcArea() << "\n";

	//pizza2.radius = 200;
	//pizza2.color = "white";
	//cout << "피자의 면적=" << pizza2.calcArea() << "\n";
	//Lab1
	//Rectangle obj;
	//
	//obj.width = 3;
	//obj.height = 4;
	//int area = obj.calcArea();
	//cout << "사각형의 넓이: " << area << endl;
	//Lab2
	//Circle c;
	//c.x = 100;
	//c.y = 100;
	//c.radius = 50;
	//c.draw();
	//Lab3
	//Car myCar;

	//myCar.speed = 100;
	//myCar.gear = 3;
	//myCar.color = "red";

	//myCar.speedUp();
	//myCar.speedDown();
	//Circle c;
	//c.radius = 10;
	//cout << c.calcArea() << endl;
	//Circle c1;
	//Circle c2;

	//c1.init(100, 100, 50);
	//c2.init(100, 200, 40);
	//for (int i = 0; i < 20; i++) {
	//	c1.move();
	//	c1.draw(); 
	//	c2.move();
	//	c2.draw();
	//	Sleep(1000);
	//}
	return 0;
}