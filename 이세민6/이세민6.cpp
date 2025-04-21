// 이세민6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

enum studentsName
{
    KIM,
    LEE,
    PARK,
    numOfStudents
};

void printStudentName(int n)
{
    switch (n)
    {
    case KIM:
        std::cout << "KIM, ";
        break;
    case LEE:
        std::cout << "LEE, ";
        break;
    case PARK:
        std::cout << "PARK, ";
        break;
    default:
        std::cout << "NO NAME, ";
    }
}

struct student
{
    int id{ 2599000 };
    int score{ 0 };
    char grade{ 'F' };
};

void score2grade(const int& score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}
void inputStudent(student& i)
{
    std::cout << "Enter id: ";
    std::cin >> i.id;
    std::cout << "Enter score: ";
    std::cin >> i.score;
    score2grade(i.score, i.grade);
}
void printStudent(const student& p)
{
    std::cout << p.id << ": " << p.score << "(" << p.grade << ")\n";
}

int main()
{
    //std::cout << KIM << std::endl;
    //std::cout << LEE << std::endl;
    //std::cout << PARK << std::endl;
    //std::cout << numOfStudents << std::endl;
    student a{}, b{}, c{ 5555555, 101, 'Y' };

    inputStudent(a);
    printStudentName(KIM);
    printStudent(a);

    printStudentName(LEE);
    printStudent(b);

    printStudentName(PARK);
    printStudent(c);

    return 0;
}
