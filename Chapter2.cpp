#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() 
{
	//EX_1
	//int x, y;

	//cout << "x값을 입력하시오: ";
	//cin >> x;

	//cout << "y값을 입력하시오: ";
	//cin >> y;

	//if (x, y)
	//	cout << "x가 y보다 큽니다. " << endl;
	//else
	//	cout << "y가 x보다 큽니다. " << endl;
	//EX_2
	//int age;
	//cout << "나이를 입력하시오: ";
	//cin >> age;

	//if (age <= 12)
	//	cout << "어린이입니다." << endl;
	//else if (age <= 19) {
	//	cout << "청소년입니다." << endl;
	//}
	//else {
	//	cout << "성인입니다." << endl;
	//}
	//Lab1
	//char SecretCode = 'h';
	//char Code;
	//cout << "비밀코드를 맞춰보세요: ";
	//cin >> Code;
	//if (Code < SecretCode) {
	//	cout << Code << "뒤에 있음";
	//}
	//else if (Code > SecretCode) {
	//	cout << Code << "앞에 있음";
	//}
	//else {
	//	cout << "정답 입니다!";
	//}
	//Lab2
	//int N1, N2, N3, MaxNum;
	//cout << "3개의 정수를 입력하시오: ";
	//cin >> N1;
	//cin >> N2;
	//cin >> N3;
	//if (N1 >= N2 && N1 >= N3) {
	//	//cout << "가장 큰 정수는" << N1;
	//	MaxNum = N1;
	//}
	//else if (N2 >= N1 && N2 >= N3) {
	//	//cout << "가장 큰 정수는" << N2;
	//	MaxNum = N2;

	//}
	//else {
	//	//cout << "가장 큰 정수는" << N3;
	//	MaxNum = N3;

	//}

	//cout << "가장 큰 정수는" << MaxNum << endl;
	//Ex_3
	//int number;
	//cout << "숫자를 입력하시오:";
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
	//cout << "발사! \n";
	//Ex_5
	//int n;
	//int i = 1;

	//cout << "구구단 중에서 출력하고 싶은 단을 입력하시오: ";
	//cin >> n;
	//while (i <= 9)
	//{
	//	cout << n << "*" << i << "=" << n * i << endl;
	//	i++;
	//}
	//Ex_6
	//string str;
	//do {
	//	cout << "문자열 입력하시오: ";
	//	getline(cin, str);
	//	cout << "사용자의 입력: " << str << endl;
	//} while (str != "종료");
	//Ex_7
	//int sum = 0;
	//for (int i = 1; i <= 10; i++) {
	//	sum += i;
	//}
	//cout << "1부터 10까지의 정수의 합 = " << sum << endl;
	//Ex_8
	//long fact = 1;
	//int n;

	//cout << "정수를 입력하시오:";
	//cin >> n;

	//for (int i = 1; i <= n; i++) {
	//	fact = fact * i;
	//}
	//cout << n << "!은 " << fact << "입니다.\n";
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
	//	cout << "continue 문장 전에 있는 문장" << endl;
	//	continue;
	//	cout << "contunue 문장 후에 있는 문장" << endl;
	//} while (i < 3);
	//Lab3
	//char ch;
	//int ConNum = 0;
	//int VowNum = 0;
	//cout << "영문자를 입력하고 콘트롤-Z를 치세요" << endl;
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
	//cout << "모음: " << VowNum << endl;
	//cout << "자음: " << ConNum << endl;
	//Lab4
	//srand(time(NULL));

	//int answer = rand() % 100;
	//int guess;
	//int tries = 0;

	//do {
	//	cout << "정답을 추측하여 보시오: ";
	//	cin >> guess;
	//	tries++;

	//	if (guess > answer)
	//		cout << "제시한 정수가 높습니다.\n";
	//	if (guess < answer)
	//		cout << "제시한 정수가 낮습니다.\n";
	//} while (guess != answer);
	//cout << "축하합니다. 시도 횟수=" << tries;
	// Lab5
	//int choice, area, length, width;
	//cout << "도형을 선택하세오(1, 2, 3): ";
	//cin >> choice;
	//if (choice == 1) {
	//	cout << "가로: ";
	//	cin >> length;
	//	cout << "세로: ";
	//	cin >> width;
	//	area = length * width;
	//	cout << "면적: " << area << endl;
	//}
	//else if (choice == 2) {

	//}
	//else if (choice == 3) {

	//}
	//else {
	//	cout << "올바르지 못한 선택입니다";
	//}
	//Lab6
	//int answer;
	//int guess;

	//cout << "산수 문제를 자동으로 출제합니다." << endl;
	//while (true)
	//{
	//	int x = rand() % 100;
	//	int y = rand() % 100;
	//	cout << x << "+" << y << "=";
	//	answer = x + y;
	//	cin >> guess;
	//	if (guess == answer) {
	//		cout << "맞았습니다." << endl;
	//		break;
	//	}
	//	else {
	//		cout << "틀렸습니다." << endl;
	//		continue;
	//	}
	//}
	//Ex_11
	//const int STUDENTS = 10;
	//int scores[STUDENTS];
	//int sum = 0;
	//int i, average;
	//for (i = 0; i < STUDENTS; i++) {
	//	cout << "학생들의 성적을 입력하시오: ";
	//	cin >> scores[i];
	//}
	//for (i = 0; i < STUDENTS; i++) {
	//	sum += scores[i];
	//}
	//average = sum / STUDENTS;
	//cout << "성적 평균= " << average << endl;
	
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
	//cout << "최대값=" << max;
	//Lab8
	//const int SIZE = 10;
	//int list[SIZE];
	//int max, person;

	//for (auto& elem : list) {
	//	cout << "아침에 먹는 사과의 개수: ";
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
	//cout << "가장 많이 사과를 먹은 사람번호=" << person << endl;
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

	////보드를 초기화한다.
	//for (x = 0; x < 3; x++)
	//	for (y = 0; y < 3; y++) board[x][y] = ' ';

	//// 사용자로부터 위치를 받아서 보드에 표시한다.
	//for (k = 0; k < 9; k++) {
	//	cout << "(x, y) 좌표: ";
	//	cin >> x >> y;
	//	board[x][y] = (k % 2 == 0) ? 'X' : 'O';
	//									//현재의 순번에 따라 'X', 'O'중 선택
	//	//보드를 화면에 그린다.
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