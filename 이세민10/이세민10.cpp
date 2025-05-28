// 이세민10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using intPtr = int*;
using datePtr = date*;

struct date
{
    intPtr year{ new int{} };
    intPtr month{ new int{} };
    intPtr day{ new int{} };
    char dayofweek[20]{};
};
void setDate(datePtr d);
void printDate(const datePtr d);
//d 변수 오류 고쳐보기
void setDate(intPtr year, intPtr month, intPtr day, char dayofweek[]);
void printDate(const intPtr year, const intPtr month, const intPtr day, const char dayofweek[]);

int main()
{
    int val{ 5 };
    int* ptr{ &val };//=intPtr ptr{ &val };
    std::cout << "val, &val: " << val << " " << &val << std::endl << "ptr, &ptr: " << ptr << " " << &ptr << std::endl << "*ptr, &*ptr: " << *ptr << " " << &*ptr << std::endl;

    //ptr = new int;
    //*ptr = 92;
    ptr = new int{ 92 };
    std::cout << "new *ptr: " << *ptr << std::endl;
    std::cout << "ptr, &ptr: " << ptr << " " << &ptr << std::endl << "*ptr, &*ptr: " << *ptr << " " << &*ptr << std::endl << std::endl;
    
    intPtr year{ new int{} }, month{ new int{} }, day{ new int{} };
    char dayofweek[20]{};
    setDate(year, month, day, dayofweek);
    printDate(year, month, day, dayofweek);

    date *today{};
    setDate(today);
    printDate(today);
    delete ptr, year, month, day, (*today).year, (*today).month, (*today).day;
    return 0;
}

void setDate(datePtr d)
{
    std::cout << "Enter year: ";
    std::cin >> *((*d).year);
    std::cout << "Enter month as a number: ";
    std::cin >> *((*d).month);
    std::cout << "Enter day: ";
    std::cin >> *((*d).day);
    std::cout << "Enter day of week: ";
    std::cin >> (*d).dayofweek;
}

void printDate(const datePtr d)
{
    std::cout << *((*d).year) << "-" << *((*d).month) << "-" << *((*d).day) << ", " << (*d).dayofweek << std::endl;

}

void setDate(intPtr year, intPtr month, intPtr day, char dayofweek[])
{
    std::cout << "Enter year: ";
    std::cin >> *year;
    std::cout << "Enter month as a number: ";
    std::cin >> *month;
    std::cout << "Enter day: ";
    std::cin >> *day;
    std::cout << "Enter day of week: ";
    std::cin >> dayofweek;
}

void printDate(const intPtr year, const intPtr month, const intPtr day, const char dayofweek[])
{
    std::cout << *year << "-" << *month << "-" << *day << ", " << dayofweek << std::endl;
}
