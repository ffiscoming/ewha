// 이세민3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>

void score2grade(int good)
{
    srand(good);
    int score{rand() % 51 + 50};
    char grade{};
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    std::cout << "score: " << score << ", grade: " << grade << std::endl;
}
int main()
{
    using namespace std;
    cout << "02, 2549092, 이세민\n";

    int month{}, day{};
    cout << "Enter today's month as a number: ";
    cin >> month;
    cout << "Enter today's day: ";
    cin >> day;

    int count{ 0 };
    const int num{ 2 };
    do
    {
        score2grade(month * count);
        ++count;
    } while (count < num);

    count = 0;
    while (count < num)
    {
        score2grade(day * count);
        ++count;
    }

    for (count = 0; count < 2; ++count)
        score2grade(month * day * count);

    return 0;
}

