// 이세민.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    using namespace std;
    cout << "2549092 이세민\n";

    int studentID{ 0 };
    int admissionYear{ 0 };

    cout << "size of int1: " << sizeof(studentID) << '\n';
    cout << "size of int2: " << sizeof(admissionYear) << endl;

    cout << "Enter your student id: ";
    cin >> studentID;

    cout << "Enter your admission year: ";
    cin >> admissionYear;

    cout << "Your student id is " << studentID << endl;
    cout << "Your admission year is " << admissionYear << endl;

    int division1 = studentID / admissionYear;
    cout << typeid(division1).name() << ": " << division1 << endl;

    double division2 = static_cast<double>(studentID) / admissionYear;
    cout << typeid(division2).name() << ": " << division2 << endl;

    studentID += 2;
    ++admissionYear;

    cout << "id += 2: " << studentID << endl;
    cout << "++year: " << admissionYear << endl;

    const int myfavoritenumber{ 5 };
    cout << "My favorite number is: " << myfavoritenumber;

    return 0;
}
