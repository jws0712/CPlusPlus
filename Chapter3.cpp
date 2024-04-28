#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;
//Ex_1 함수
//int max(int x, int y) { //큰값 구하기
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//Lab1 함수
//int square(int n) { //제곱 구하기
//	return(n * n);
//}
//Lab2 함수
//void swap(int& x, int& y) {
//	int tmp;
//
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Ex_2
//int square(int i) {
//	cout << "square(int) 호출" << endl;
//	return i * i;
//}
//
//double square(double i) {
//	cout << "square(double) 호출" << endl;
//	return i * i;
//}
//Lab3중복 함수
//void print(int i) {
//	cout << "정수 출력" << i << endl;
//}
//void print(double f) {
//	cout << "실수 출력" << f << endl;
//}
//void print(char c) {
//	cout << "문자 출력" << c << endl;
//}
//Ex_3디폴트 인수
//void display(char c = '*', int n = 10) {
//	for (int i = 0; i < n; i++) {
//		cout << c;
//	}
//	cout << endl;
//}
//Lab4디폴트 인수
//int sum(int x, int y, int z = 0, int w = 0) {
//	return x + y + z + w;
//}


int main() {
	//Ex_1함수
	//int n;
	//n = max(2, 3);
	//cout << "연산 결과 = " << n << endl;
	//Lab2 함수
	//int n;
	//cout << "제곱할 정수를 입력하시오: ";
	//cin >> n;

	//cout << square(n) << endl;
	//return 0;
	//Lap2 함수
	//int a = 100, b = 200;

	//printf("a=%d b=%d\n", a, b);
	//swap(a, b);
	//printf("a=%d b=%d\n", a, b);
	//Ex_2중복 함수
	//cout << square(10) << endl;
	//cout << square(2.0) << endl;
	//Lab3중복 함수
	//print(100);
	//print(3.14);
	//print('C');
	//Ex_3디폴트 인수
	//cout << "아무런 인수가 전달되지 않는 경우:\n";
	//display();
	//cout << "\n첫 번째 인수만 전달되는 경우:\n";
	//display('#');
	//cout << "\n모든 인수가 전달되는 경우:\n";
	//display('#', 5);
	//Lap4
	//cout << "sum(10, 15)=" << sum(10, 15) << endl;
	//cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << endl;
	//cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << endl;
	//Ex_4문자열
	//string s1, addr;
	//cout << "이름을 입력하시오 : ";
	//cin >> s1;
	//cin.ignore();

	//cout << "주소를 입력하시오 : ";
	//getline(cin, addr);
	//cout << addr << "의 " << s1 << "씨 안녕하시요? " << endl;
	//Ex_5문자열
	//string s = "When in Rome, do as the Romans.";

	//int index = s.find("Rome");
	//cout << index << endl;
	//Ex_6문자열
	//string s;
	//cout << "주민등록번호를 입력하시오: ";
	//cin >> s;

	//cout << "-가 제거된 주민등록번호: ";
	//for (auto& c : s) {
	//	if (c == '-') continue;
	//	cout << c;
	//}
	//cout << endl;
	//Ex_7문자열
	//string list[] = { "철수", "영희", "길동" };

	//for (auto& x : list)
	//	cout << (x + "야 안녕!") << endl;
	//Lab6
	//string s1, s2;
	//int count = 0;
	//cout << "DNA1: ";
	//cin >> s1;
	//cout << "DNA2: ";
	//cin >> s2;

	//if (s1.length() != s2.length()) {
	//	cout << "오류: 길이가 다름" << endl;
	//}
	//else {
	//	for (int i = 0; i < s1.length(); i++) {
	//		if (s1[i] != s2[i]) {
	//			count += 1;
	//		}
	//	}
	//	cout << "해밍 거리는 " << coun << endl;
	//}
	//Lab7
	//char ch;
	//string solution;
	//string list[] = {
	//	"the",
	//	"c++",
	//	"programming",
	//	"language",
	//};
	//int n = rand() % 4;
	//solution = list[n];
	//string guess(solution.length(), '_');
	//while (true)
	//{
	//	cout << guess << endl;
	//	cout << "글자를 입력하시오: ";
	//	cin >> ch;
	//	for (int i = 0; i < solution.length(); i++) {
	//		if (ch == solution[i]) {
	//			guess[i] = ch;
	//		}
	//	}
	//	if (solution == guess) {
	//		cout << solution << endl;
	//		cout << "성공하였습니다.!";
	//		break;
	//	}
	//}
	return 0;
}