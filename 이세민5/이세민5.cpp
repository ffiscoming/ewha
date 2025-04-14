﻿// 이세민5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
