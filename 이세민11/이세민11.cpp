// 이세민11.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using intPtr = int*;
void parVal(int v) { v += 1; }
void parRef(int& r) { r += 1; }
void parPtr(int* p) { *p += 1; }
int retVal(int v) { v += 1; return v; }
int retRef(int& r) { r += 1; return r; }
intPtr retPtr(intPtr p) { *p += 1; return p; }

int main()
{
    int val{ 5 };
    int& ref{ val };
    int* ptr{ &val };

    std::cout << "val, &val: " << val << " " << &val << std::endl;
    parVal(val);
    std::cout << "After parVal: " << val << std::endl;
    std::cout << "RetVal returns: " << retVal(val) << std::endl;

    std::cout << "ref, &ref: " << ref << " " << &ref << std::endl;
    parRef(ref);
    std::cout << "After parRef: " << ref << std::endl;
    std::cout << "RetRef returns: " << retRef(ref) << std::endl;

    std::cout << "ptr, *ptr: " << ptr << " " << *ptr << std::endl;
    parPtr(ptr);
    std::cout << "After parPtr: " << *ptr << std::endl;
    std::cout << "RetPtr returns: " << *retPtr(ptr) << std::endl;



}

