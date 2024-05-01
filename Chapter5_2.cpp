#include <Windows.h>
#include <iostream>

using namespace std;
//Lab1
//class Rectangel {
//	int width, height;
//public:
//	Rectangel(int w, int h);
//	int calcArea();
//};
//
//Rectangel::Rectangel(int w, int h) {
//	width = w;
//	height = h;
//}
//
//int Rectangel::calcArea() {
//	return width * height;
//}
//Lab2
//class Circle {
//	int x, y, radius;
//	string color;
//public:
//	Circle(int xval = 0, int yval = 0, int r = 0, string c = "");
//	double calcArea() { return radius * radius * 3.14; }
//	void draw();
//};
//
//Circle::Circle(int xval, int yval, int r, string c) {
//	x = xval;
//	y = yval;
//	radius = r;
//	color = c;
//}
//
//void Circle::draw() {
//	HDC hdc = GetWindowDC(GetForegroundWindow());
//	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
//}
//Ex_1 접근자
//class Time {
//public:
//	Time(int h, int m);
//	void inc_hour();
//	void print();
//
//	int getHour() { return hour; }
//	int getMinute() { return minute; }
//	void setHour(int h) { hour = h; }
//	void setMinute(int m) { minute = m; }
//private:
//	int hour;
//	int minute;
//
//};
//
//Time::Time(int h, int m) {
//	hour = h;
//	minute = m;
//}
//
//void Time::inc_hour() {
//	++hour;
//	if (hour > 23) {
//		hour = 0;
//	}
//}
//
//void Time::print() {
//	cout << hour << ":" << minute << endl;
//}
//Lab2
//class Circle {
//public:
//	Circle(int xcal, int yval, int r);
//	void draw();
//	void move();
//private:
//	int x, y, radius;
//};
//
//Circle::Circle(int xval, int yval, int r) : x(xval), y(yval), radius(r) {
//}
//void Circle::draw() {
//	HDC hdc = GetWindowDC(GetForegroundWindow());
//	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
//}
//
//void Circle::move() {
//	x += rand() % 50;
//}
//Ex_2 객체가 함수의 매개 변수로 전달되는 경우
//class Pizza {
//public:
//	Pizza(int s) : size(s) { }
//	int size;
//};
//
//void makeDouble(Pizza p) {
//	p.size *= 2;
//}

//Ex_3 객체의 참조자가 함수의 매개 변수로 전달되는 경우
//class Pizza {
//public:
//	Pizza(int s) : size(s) { }
//	int size;
//};
//
//void makeDouble(Pizza& p) {
//	p.size *= 2;
//}

//Ex_4 함수가 객체를 반환하는 경우
class Pizza {
public:
	Pizza(int s) : size(s) { }
	int size;
};

Pizza createPizza() {
	Pizza p(100);
	return p;
}

int main() {
	//Lab1
	//Rectangel r(3, 4);

	//cout << "사각형의 넓이 : " << r.calcArea() << "\n";
	//Lab2
	//for (int i = 0; i < 10; i++) {
	//	int x = 100 + rand() % 300;
	//	int y = 100 + rand() % 300;
	//	int r = rand() % 100;
	//	Circle c(x, y, r, "yellow");
	//	
	//}
	//Ex_1 접근자
	//Time a(0, 0);

	//a.setHour(6);
	//a.setMinute(30);

	//a.print();
	//Lab2
	//Circle c1( 100,100,50 );
	//Circle c2( 100, 200, 40);

	//for (int i = 0; i < 20; i++) {
	//	c1.move();
	//	c1.draw();
	//	c2.move();
	//	c2.draw();
	//	Sleep(1000);
	//}
	//Ex_2 객체가 함수의 매개 변수로 전달되는 경우
	//Pizza pizza(10);
	//makeDouble(pizza);
	//cout << pizza.size << "인치 피자" << endl;
	//Ex_3 객체의 참조자가 함수의 매개 변수로 전달되는 경우
	//Pizza pizza(10);
	//makeDouble(pizza);
	//cout << pizza.size << "인치 피자" << endl;
	Pizza pizza = createPizza();
	cout << pizza.size << "인치 피자" << endl;

	return 0;
}