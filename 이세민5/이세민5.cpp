// 이세민5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int inputScore();//콘솔창으로 int형 값을 입력받고 이를 리턴하는 함수를 선언
void inputScore(int&);//콘솔창으로 매개변수값을 입력받음
//함수이름은 같고 같은 작업을 하는데 매개변수와 리턴이 다를때 이를 오버로딩이라고 함
bool isValid(int score);//매개변수가 0~100이면 true, 그렇지 않으면 false를 리턴하는 함수 선언
void score2grade(const int&, char&);// int형 매개변수 값 (90이상,80이상,70이상,60이상,그외)에 따라 char형에 ('A','B','C','D','F')값을 할당하는 함수 선언
//데이터를 보호하고 여전히 참조로 전달하기 위해 const를 사용
void showScoreGrade(const int& score = 100, const char& grade = 'A');//기본값은 순서대로 100, 'A', 콘솔창으로 매개변수 출력

int main()
{
    std::cout << "02, 2549092, 이세민\n";

    return 0;
}

int inputScore()
{
	std::cout << "Enter your score: ";
	int score{};
	std::cin >> score;
	return score;
}

void inputScore(int score)
{

}
