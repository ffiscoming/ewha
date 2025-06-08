// 이세민12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
using intPtr = int*;

void fillArray(int a[], int size);
void printArray(const int a[], int size);
void printArrayInReverse(const int a[], int size);

int* findOtherPointer(int* p);
void sneaky(intPtr temp);

int main()
{
    std::cout << "02, 2549092, 이세민" << std::endl;
    const int n{ 3 };
    int a[n]{};
    fillArray(a, n);
    printArray(a, n);

    intPtr p{ a };
    printArrayInReverse(p, n);

    intPtr p1{};
    int m{};
    std::cout << "Enter size of array: ";
    std::cin >> m;
    p1 = new int[m];
    fillArray(p1, m);
    printArray(p1, m);
    printArrayInReverse(p1, m);

    delete[] p1;
    p1 = nullptr;
    //int* p{ new int{17} };
    //std::cout << "(in main) p is " << p << ", *p is " << *p << std::endl;
    //p = findOtherPointer(p);
    //std::cout << "After call findOtherPointer: \n";
    //std::cout << "(in main) p is " << p << ", *p is " << *p << std::endl;
    //*p = 77;
    //std::cout << "(in main) p is " << p << ", *p is " << *p << std::endl;
    //sneaky(p);
    //std::cout << "After call sneaky: \n";
    //std::cout << "(in main) p is " << p << ", *p is " << *p << std::endl;
    //delete p;

    return 0;
}

void fillArray(int a[], int size)
{
    std::cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> *(a + i);//a[i]: *(a+i), &a[i]: a+i
    }
}

void printArray(const int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *(a + i) << " ";
    }
    std::cout << std::endl;
}

void printArrayInReverse(const int a[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        std::cout << *(a + i) << " ";
    }
    std::cout << std::endl;
}

int* findOtherPointer(int* p)
{
    std::cout << "(in findOtherPointer) p is " << p << ", *p is " << *p << std::endl;
    int* otherp{ new int{7} };
    std::cout << "(in findOtherPointer) otherp is " << otherp << ", *otherp is " << *otherp
        << std::endl;
    return otherp;
}

void sneaky(intPtr temp)
{
    *temp = 99;
    std::cout << "(in sneaky) temp is " << temp << ", *temp is " << *temp << std::endl;
}
