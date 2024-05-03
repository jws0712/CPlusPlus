#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

//Ex_1 객체 배열
//class Circle {
//public:
//	int x, y;
//	int radius;
//	Circle() : x( 0 ), y( 0 ), radius( 0 ) { }
//	Circle(int x, int y, int r) : x( x ), y( y ), radius( r ) { }
//	void print() {
//		cout << "반지름 " << radius << "@(" << x << ", " << y << ")" << endl;
//	}
//};

//Lab1
//class Book {
//	string title;
//	int price;
//public:
//	Book(string name, int price) : title(name), price(price) { }
//	void print() {
//		cout << "제목: " << title << "가격:" << price << endl;
//	}
//};
//Lab2
//class Circle {
//public:
//	int x, y;
//	int radius;
//	Circle() : x( 0 ), y( 0 ), radius( 0 ) { }
//	Circle(int x, int y, int r) : x( 0 ), y( 0 ), radius( 0 ) { }
//	void draw() {
//		int r = radius / 2;
//		HDC hdc = GetWindowDC(GetForegroundWindow());
//		Ellipse(hdc, x - r, y - r, x + r, y + r);
//	}
//};
// Ex_3 벡터
//class Circle {
//public:
//	int x, y;
//	int radius;
//	Circle() : x( 0 ), y( 0 ), radius( 0 ) { }
//	Circle(int x, int y, int r) : x( x ), y( y ), radius( r ) { }
//	void print() {
//		cout << "반지름 " << radius << "@(" << x << ", " << y << ")" << endl;
//	}
//};
//Ex_4 벡터의 알고리즘
//class Person {
//private:
//	string name;
//	int age;
//public:
//	Person(string n, int a) {
//		name = n;
//		age = a;
//	}
//	string get_name() { return name; }
//	int get_age() { return age; }
//	void print() {
//		cout << name << " " << age << endl;
//	}
//};
//
//bool compare(Person& p, Person& q) {
//	return p.get_age() < q.get_age();
//}

int main() {

	//Ex_1 객체 배열
	//Circle objArray[10];

	//for (Circle& c : objArray) {
	//	c.x = rand() % 500;
	//	c.y = rand() % 300;
	//	c.radius = rand() % 100;
	//}
	//for (Circle c : objArray)
	//	c.print();

	//Lab1
	//Book books[2] = {
	//	Book("어서와 C++", 30000),
	//	Book("어서와 C", 22000)
	//};

	//cout << "소장하고 있는 책 정보" << endl;
	//cout << "==============================" << endl;
	//for (Book& b : books)
	//	b.print();
	//cout << "===============================" << endl;
	//Lab2
	//Circle objArray[10];

	//while (true)
	//{
	//	for (Circle& c : objArray) {
	//		c.x = rand() % 500;
	//		c.y = rand() % 300;
	//		c.radius = rand() % 100;
	//		c.draw();
	//	}
	//}
	//vector<int> fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	//for (auto& number : fibonacci)
	//	cout << number << ' ';

	//cout << endl;
	//Ex_2 벡터
	//vector<string> vec;

	//vec.push_back("MILK");
	//vec.push_back("BREAD");
	//vec.push_back("BUTTER");
	//for (auto e : vec) {
	//	cout << " " << e;
	//}
	//cout << endl;
	//vector<Circle> objArray;

	//for (int i = 0; i < 10; i++) {
	//	Circle obj{ rand() % 300, rand() % 300, rand() % 100 };
	//	objArray.push_back(obj);
	//}
	//for (Circle& c : objArray) {
	//	c.print();
	//}
	//Ex_4 벡터와 알고리즘
	//vector<Person> list;

	//list.push_back(Person("Kim", 30));
	//list.push_back(Person("Kim", 22));
	//list.push_back(Person("Kim", 26));

	//sort(list.begin(), list.end(), compare);

	//for (auto& e : list) {
	//	e.print();
	//}
	return 0;
}