#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;
//Ex_1 �Լ�
//int max(int x, int y) { //ū�� ���ϱ�
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//Lab1 �Լ�
//int square(int n) { //���� ���ϱ�
//	return(n * n);
//}
//Lab2 �Լ�
//void swap(int& x, int& y) {
//	int tmp;
//
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Ex_2
//int square(int i) {
//	cout << "square(int) ȣ��" << endl;
//	return i * i;
//}
//
//double square(double i) {
//	cout << "square(double) ȣ��" << endl;
//	return i * i;
//}
//Lab3�ߺ� �Լ�
//void print(int i) {
//	cout << "���� ���" << i << endl;
//}
//void print(double f) {
//	cout << "�Ǽ� ���" << f << endl;
//}
//void print(char c) {
//	cout << "���� ���" << c << endl;
//}
//Ex_3����Ʈ �μ�
//void display(char c = '*', int n = 10) {
//	for (int i = 0; i < n; i++) {
//		cout << c;
//	}
//	cout << endl;
//}
//Lab4����Ʈ �μ�
//int sum(int x, int y, int z = 0, int w = 0) {
//	return x + y + z + w;
//}


int main() {
	//Ex_1�Լ�
	//int n;
	//n = max(2, 3);
	//cout << "���� ��� = " << n << endl;
	//Lab2 �Լ�
	//int n;
	//cout << "������ ������ �Է��Ͻÿ�: ";
	//cin >> n;

	//cout << square(n) << endl;
	//return 0;
	//Lap2 �Լ�
	//int a = 100, b = 200;

	//printf("a=%d b=%d\n", a, b);
	//swap(a, b);
	//printf("a=%d b=%d\n", a, b);
	//Ex_2�ߺ� �Լ�
	//cout << square(10) << endl;
	//cout << square(2.0) << endl;
	//Lab3�ߺ� �Լ�
	//print(100);
	//print(3.14);
	//print('C');
	//Ex_3����Ʈ �μ�
	//cout << "�ƹ��� �μ��� ���޵��� �ʴ� ���:\n";
	//display();
	//cout << "\nù ��° �μ��� ���޵Ǵ� ���:\n";
	//display('#');
	//cout << "\n��� �μ��� ���޵Ǵ� ���:\n";
	//display('#', 5);
	//Lap4
	//cout << "sum(10, 15)=" << sum(10, 15) << endl;
	//cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << endl;
	//cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << endl;
	//Ex_4���ڿ�
	//string s1, addr;
	//cout << "�̸��� �Է��Ͻÿ� : ";
	//cin >> s1;
	//cin.ignore();

	//cout << "�ּҸ� �Է��Ͻÿ� : ";
	//getline(cin, addr);
	//cout << addr << "�� " << s1 << "�� �ȳ��Ͻÿ�? " << endl;
	//Ex_5���ڿ�
	//string s = "When in Rome, do as the Romans.";

	//int index = s.find("Rome");
	//cout << index << endl;
	//Ex_6���ڿ�
	//string s;
	//cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�: ";
	//cin >> s;

	//cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
	//for (auto& c : s) {
	//	if (c == '-') continue;
	//	cout << c;
	//}
	//cout << endl;
	//Ex_7���ڿ�
	//string list[] = { "ö��", "����", "�浿" };

	//for (auto& x : list)
	//	cout << (x + "�� �ȳ�!") << endl;
	//Lab6
	//string s1, s2;
	//int count = 0;
	//cout << "DNA1: ";
	//cin >> s1;
	//cout << "DNA2: ";
	//cin >> s2;

	//if (s1.length() != s2.length()) {
	//	cout << "����: ���̰� �ٸ�" << endl;
	//}
	//else {
	//	for (int i = 0; i < s1.length(); i++) {
	//		if (s1[i] != s2[i]) {
	//			count += 1;
	//		}
	//	}
	//	cout << "�ع� �Ÿ��� " << coun << endl;
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
	//	cout << "���ڸ� �Է��Ͻÿ�: ";
	//	cin >> ch;
	//	for (int i = 0; i < solution.length(); i++) {
	//		if (ch == solution[i]) {
	//			guess[i] = ch;
	//		}
	//	}
	//	if (solution == guess) {
	//		cout << solution << endl;
	//		cout << "�����Ͽ����ϴ�.!";
	//		break;
	//	}
	//}
	return 0;
}