// 이세민4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>

int inputScore();//리턴형은 int형, 매개변수는 없음, 콘솔창으로 int형 값을 입력받고 이를 리턴하는 함수를 선언
bool isValid(int score);//리턴형은 bool형, 매개변수는 int형 1개, 매개변수가0~100이면 true, 그렇지 않으면 false를 리턴하는 함수 선언
char getGrade(int score);//리턴형은 char형, 매개변수는 int형 1개, 매개변수 값(90이상, 80이상, 70이상, 60이상, 그외)에 따라 char형('A', 'B', 'C', 'D', 'F')을 리턴하는 함수 선언
double power(double x, double y);//리턴형은 double형, 매개변수는 double형 2개,리턴은 x^ y, 재귀함수로 구현
double getPower(double x, double y);//리턴형은 double형, 매개변수는 double형 2개, 리턴은 x^ y, 반복문으로 구현

int main()
{
	int score{ inputScore() };
	if (!isValid(score))
	{
		std::cout << score << " is NOT valid! EXIT!!\n";
		std::exit(-1);
	}
	std::cout << getGrade(score) << std::endl;

	std::cout << "power(3, 2)" << power(3, 2) << std::endl;
	std::cout << "getPower(3, 2)" << getPower(3, 2) << std::endl;
	std::cout << "pow(3, 2)" << pow(3, 2) << std::endl;
	return 0;
}


int inputScore()
{
	std::cout << "Enter your score: ";
	int score{};
	std::cin >> score;
	return score;
}

bool isValid(int score)
{
	return score >= 0 && score <= 100;
}

char getGrade(int score)
{
	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';
	else return 'F';
}

double power(double x, double y)//y가 0이면 1을 리턴, x*power(x,y-1)을 리턴
{
	if (y == 0) return 1;
	return x * power(x, y - 1);
}

double getPower(double x, double y)
{
	double pow{ 1 };
	for (int i = 1; i <= y; ++i)
		pow *= x;
	return pow;
}