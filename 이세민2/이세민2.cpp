// 이세민2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int main()
{
    int score{};//0~100
    char grade{};//'A' 'B' 'C' 'D' 'F'

    const int num{ 2 };
    int count{ 0 };

    do {
        if (count == 1)
            break;

        std::cout << "Enter your score: ";
        std::cin >> score;

        if (score < 0 || 100 < score) //if (!(0 <= score && score <= 100))
        {
            std::cout << "You entered the wrong score.\n";
            return 1;
        }

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


        switch (score / 10) //int형!!
        {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
        }

        std::cout << "Your grade is " << grade << std::endl;
        count++;

    } while (count < num);

    count = 0;
    while (count < num)
    {
        if (count == 0)
        {
            count++;
            continue;
        }
        std::cout << "Enter your score: ";
        std::cin >> score;

        if (score < 0 || 100 < score) //if (!(0 <= score && score <= 100))
        {
            std::cout << "You entered the wrong score.\n";
            return 1;
        }

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


        switch (score / 10) //int형!!
        {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
        }



        std::cout << "Your grade is " << grade << std::endl;
        count++;
    }

    for (count = 0; count < 2; count++)
    {
        if (count == 0)
        {
            return 2;
        }

        std::cout << "Enter your score: ";
        std::cin >> score;

        if (score < 0 || 100 < score) //if (!(0 <= score && score <= 100))
        {
            std::cout << "You entered the wrong score.\n";
            return 1;
        }

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


        switch (score / 10) //int형!!
        {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
        }

        std::cout << "Your grade is " << grade << std::endl;
        count++;

    }

    return 0; //if 위치 조심.. 복습하자..
}
