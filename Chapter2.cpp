#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() 
{
	//EX_1
	//int x, y;

	//cout << "x���� �Է��Ͻÿ�: ";
	//cin >> x;

	//cout << "y���� �Է��Ͻÿ�: ";
	//cin >> y;

	//if (x, y)
	//	cout << "x�� y���� Ů�ϴ�. " << endl;
	//else
	//	cout << "y�� x���� Ů�ϴ�. " << endl;
	//EX_2
	//int age;
	//cout << "���̸� �Է��Ͻÿ�: ";
	//cin >> age;

	//if (age <= 12)
	//	cout << "����Դϴ�." << endl;
	//else if (age <= 19) {
	//	cout << "û�ҳ��Դϴ�." << endl;
	//}
	//else {
	//	cout << "�����Դϴ�." << endl;
	//}
	//Lab1
	//char SecretCode = 'h';
	//char Code;
	//cout << "����ڵ带 ���纸����: ";
	//cin >> Code;
	//if (Code < SecretCode) {
	//	cout << Code << "�ڿ� ����";
	//}
	//else if (Code > SecretCode) {
	//	cout << Code << "�տ� ����";
	//}
	//else {
	//	cout << "���� �Դϴ�!";
	//}
	//Lab2
	//int N1, N2, N3, MaxNum;
	//cout << "3���� ������ �Է��Ͻÿ�: ";
	//cin >> N1;
	//cin >> N2;
	//cin >> N3;
	//if (N1 >= N2 && N1 >= N3) {
	//	//cout << "���� ū ������" << N1;
	//	MaxNum = N1;
	//}
	//else if (N2 >= N1 && N2 >= N3) {
	//	//cout << "���� ū ������" << N2;
	//	MaxNum = N2;

	//}
	//else {
	//	//cout << "���� ū ������" << N3;
	//	MaxNum = N3;

	//}

	//cout << "���� ū ������" << MaxNum << endl;
	//Ex_3
	//int number;
	//cout << "���ڸ� �Է��Ͻÿ�:";
	//cin >> number;
	//switch (number)
	//{
	//case 0:
	//	cout << "zero\n";
	//	break;
	//case 1:
	//	cout << "one\n";
	//	break;
	//case 2:
	//	cout << "two\n";
	//	break;
	//default:
	//	cout << "many\n";
	//	break;
	//}
	//Ex_4
	//int n = 10;
	//while (n > 0)
	//{
	//	cout << n << " ";
	//	n--;
	//}
	//cout << "�߻�! \n";
	//Ex_5
	//int n;
	//int i = 1;

	//cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ";
	//cin >> n;
	//while (i <= 9)
	//{
	//	cout << n << "*" << i << "=" << n * i << endl;
	//	i++;
	//}
	//Ex_6
	//string str;
	//do {
	//	cout << "���ڿ� �Է��Ͻÿ�: ";
	//	getline(cin, str);
	//	cout << "������� �Է�: " << str << endl;
	//} while (str != "����");
	//Ex_7
	//int sum = 0;
	//for (int i = 1; i <= 10; i++) {
	//	sum += i;
	//}
	//cout << "1���� 10������ ������ �� = " << sum << endl;
	//Ex_8
	//long fact = 1;
	//int n;

	//cout << "������ �Է��Ͻÿ�:";
	//cin >> n;

	//for (int i = 1; i <= n; i++) {
	//	fact = fact * i;
	//}
	//cout << n << "!�� " << fact << "�Դϴ�.\n";
	//Ex_9
	//for (int i = 1; i < 10; i++) {
	//	cout << i << " ";
	//	if (i == 4)
	//		break;
	//}
	//Ex_10
	//int i = 0;
	//do {
	//	i++;
	//	cout << "continue ���� ���� �ִ� ����" << endl;
	//	continue;
	//	cout << "contunue ���� �Ŀ� �ִ� ����" << endl;
	//} while (i < 3);
	//Lab3
	//char ch;
	//int ConNum = 0;
	//int VowNum = 0;
	//cout << "�����ڸ� �Է��ϰ� ��Ʈ��-Z�� ġ����" << endl;
	//while (cin >> ch)
	//{
	//	switch (ch) {
	//	case 'a': case 'i': case 'e': case 'o': case 'u':
	//		VowNum++;
	//		break;
	//	default:
	//		ConNum++;
	//		break;
	//	}
	//}
	//cout << "����: " << VowNum << endl;
	//cout << "����: " << ConNum << endl;
	//Lab4
	//srand(time(NULL));

	//int answer = rand() % 100;
	//int guess;
	//int tries = 0;

	//do {
	//	cout << "������ �����Ͽ� ���ÿ�: ";
	//	cin >> guess;
	//	tries++;

	//	if (guess > answer)
	//		cout << "������ ������ �����ϴ�.\n";
	//	if (guess < answer)
	//		cout << "������ ������ �����ϴ�.\n";
	//} while (guess != answer);
	//cout << "�����մϴ�. �õ� Ƚ��=" << tries;
	// Lab5
	//int choice, area, length, width;
	//cout << "������ �����ϼ���(1, 2, 3): ";
	//cin >> choice;
	//if (choice == 1) {
	//	cout << "����: ";
	//	cin >> length;
	//	cout << "����: ";
	//	cin >> width;
	//	area = length * width;
	//	cout << "����: " << area << endl;
	//}
	//else if (choice == 2) {

	//}
	//else if (choice == 3) {

	//}
	//else {
	//	cout << "�ùٸ��� ���� �����Դϴ�";
	//}
	//Lab6
	//int answer;
	//int guess;

	//cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	//while (true)
	//{
	//	int x = rand() % 100;
	//	int y = rand() % 100;
	//	cout << x << "+" << y << "=";
	//	answer = x + y;
	//	cin >> guess;
	//	if (guess == answer) {
	//		cout << "�¾ҽ��ϴ�." << endl;
	//		break;
	//	}
	//	else {
	//		cout << "Ʋ�Ƚ��ϴ�." << endl;
	//		continue;
	//	}
	//}
	//Ex_11
	//const int STUDENTS = 10;
	//int scores[STUDENTS];
	//int sum = 0;
	//int i, average;
	//for (i = 0; i < STUDENTS; i++) {
	//	cout << "�л����� ������ �Է��Ͻÿ�: ";
	//	cin >> scores[i];
	//}
	//for (i = 0; i < STUDENTS; i++) {
	//	sum += scores[i];
	//}
	//average = sum / STUDENTS;
	//cout << "���� ���= " << average << endl;
	
	//Ex_12
	//int list[] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i : list) {
	//	cout << i << " ";
	//}
	//cout << endl;
	//Lab7
	//int list[10];
	//int max;

	//for (auto& i : list) {
	//	i = rand() % 100 + 1;
	//	cout << i << " ";
	//}
	//cout << endl;
	//max = list[0];
	//for (auto& i : list) {
	//	if (i > max) {
	//		max = i;
	//	}
	//}
	//cout << "�ִ밪=" << max;
	//Lab8
	//const int SIZE = 10;
	//int list[SIZE];
	//int max, person;

	//for (auto& elem : list) {
	//	cout << "��ħ�� �Դ� ����� ����: ";
	//	cin >> elem;
	//}
	//cout << endl;
	//max = list[0];
	//person = 0;
	//for (int i = 1; i < SIZE; i++) {
	//	if (list[i] > max) {
	//		max = list[i];
	//		person = i;
	//	}
	//}
	//cout << "���� ���� ����� ���� �����ȣ=" << person << endl;
	//Ex_13
	//const int WIDTH = 9;
	//const int HEIGHT = 3;

	//int table[HEIGHT][WIDTH];
	//int r, c;
	//for (r = 0; r < HEIGHT; r++)
	//	for (c = 0; c < WIDTH; c++) {
	//		table[r][c] = (r + 1) * (c + 1);
	//	}
	//for (r = 0; r < HEIGHT; r++) {
	//	for (c = 0; c < WIDTH; c++) {
	//		cout << table[r][c] << ", ";
	//	}
	//	cout << endl;
	//}
	//Lab9
	//char board[3][3];
	//int x, y, k, i;

	////���带 �ʱ�ȭ�Ѵ�.
	//for (x = 0; x < 3; x++)
	//	for (y = 0; y < 3; y++) board[x][y] = ' ';

	//// ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ���Ѵ�.
	//for (k = 0; k < 9; k++) {
	//	cout << "(x, y) ��ǥ: ";
	//	cin >> x >> y;
	//	board[x][y] = (k % 2 == 0) ? 'X' : 'O';
	//									//������ ������ ���� 'X', 'O'�� ����
	//	//���带 ȭ�鿡 �׸���.
	//	for (i = 0; i < 3; i++) {
	//		cout << "---|---|---" << endl;
	//		cout << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << endl;
	//	}
	//	cout << "---|---|---";
	//}
	//Lab10
	bool board[10][10] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if ((rand() % 100) < 30)
				board[i][j] = true;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (board[i][j]) {
				cout << "# ";
			}
			else {
				cout << ". ";
			}
		}
		cout << endl;
	}

	return 0;
}