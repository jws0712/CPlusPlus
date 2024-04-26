#include <iostream>
//cin과 cout을 사용할 수 있게 해주는 해더
#include <string>
//string을 사용할 수 있게 해주는 해더
#include <ctime>
#include <cstdlib>
//C++에서 난수를 발생시켜 주는 헤더들
#include <math.h>
//C++에서 다양한 수학 수식 메서드를 추가시켜주는 해더
using namespace std;

int main()
{
	//Chapter1
	//cout << "Hello World!" << endl;
	
	//Lab1
	
	//int money;
	//int cost;
	//cout << "현재 가지고 있는 돈: ";
	//cin >> money;
	//cout << "캔디의 가격: ";
	//cin >> cost;
	//cout << "최대로 살 수 있는 캔디의 개수=" << (money / cost) << endl;
	//cout << "캔디 구입 후 남은 돈=" << (money % cost) << endl;
	// << 를 사용할떄는 to_string의 과정이 필요없음 +일때만
	
	//Lab2
	
	//double c_temp;
	//double f_temp = 60;
	//double사용!
	//c_temp = (5.0 / 9.0) * (f_temp - 32);
	//수식을 입력할 때 5/9로 하면 정수의 나눗셈이 되기 떄문에 5.0/9.0으로 적어야 한다.
	//cout << "화씨온도 " << f_temp << "도는 " << "섭씨온도 " << c_temp << "입니다." << endl;

	//Lab3
	//srand(time(NULL));
	//int number = (rand() % 6) + 1;
	//int number2 = (rand() % 6) + 1;

	//cout << "두 주사위 합=" << number + number2 << endl;

	//PE1
	//string S;
	//string V;
	//string O;
	//cout << "주어: ";
	//cin >> S;
	//cout << "동사: ";
	//cin >> V;
	//cout << "목적어: ";
	//cin >> O;
	//cout << S + " "+ V + " " + "a" + " "+ O;
	//PE2
	//int age;
	//cout << "나이: ";
	//cin >> age;
	//cout << "10년 후에는 " << age + 10 << "살이 됩니다.";
	//PE3
	//int Line;
	//int Line2;
	//int ResultLine;
	//cout << "첫 번쨰 변: ";
	//cin >> Line;
	//cout << "두 번쨰 변: ";
	//cin >> Line2;
	//cout << endl;
	//ResultLine = sqrt((Line * Line) + (Line2 * Line2));
	//cout << "빗변 길이: " << ResultLine;
	//PE4
	//int L;
	//int W;
	//int H;
	//cout << "길이: ";
	//cin >> L;
	//cout << "너비: ";
	//cin >> W;
	//cout << "높이: ";
	//cin >> H;
	//cout << endl;
	//cout << "상자의 부피: " << L * W * H<<endl;
	//cout << "상자의 표면적: " << 2 * ((L * W) + (L * H) + (H * W));
	//PE5
	//const double P = 3.3058;
	//int Pnum;
	//cout << "평: ";
	//cin >> Pnum;
	//cout << "평방미터: " << P * Pnum;
	//PE6
	//int H;
	//int M;
	//int S;
	//cout << "시: ";
	//cin >> H;
	//cout << "분: ";
	//cin >> M;
	//cout << "초: ";
	//cin >> S;
	//cout << "전체 초: " << 3600 * H + 60 * M + S;
	//PE7

	//PE8
	int Q1;
	int Q2;
	int Q3;

	cout << "퀴즈 #1 성적: ";
	cin >> Q1;
	cout << "퀴즈 #1 성적: ";
	cin >> Q2;
	cout << "퀴즈 #1 성적: ";
	cin >> Q3;
	return 0;
}