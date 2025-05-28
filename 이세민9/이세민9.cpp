// 이세민9.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstring>
int myStrlen(const char s[]);
void pasteOneSpace(const char s1[], const char s2[]);
void test(int a[])
{
	std::cout << a << std::endl;
}

int main()
{
	std::cout << "02, 2549092, 이세민\n";

	int a[10]{};
	std::cout << a << std::endl;
	std::cout << &a[0] << std::endl;
	test(a);

	char s[]{ "FooFighters" };
	std::cout << s << std::endl;
	int mylen{ myStrlen(s) };
	int liblen{ static_cast<int>(strlen(s)) };
	std::cout << "mylen: " << mylen << std::endl << "strlen: " << liblen <<
		std::endl;
	if (mylen == liblen) std::cout << "Good job!" << std::endl;

	char s1[100]{}, s2[100]{};
	std::cout << "Enter string1: ";
	std::cin.getline(s1, 100);
	std::cout << "Enter string2: ";
	std::cin.getline(s2, 100);
	if (!strcmp(s1, s2)) std::cout << "SAME" << std::endl;
	else std::cout << "NOT SAME" << std::endl;
	pasteOneSpace(s1, s2);

	return 0;
}

int myStrlen(const char s[])
{
	int index{ 0 };
	while (s[index] != '\0')
	{
		//std::cout << index << " " << s[index] << std::endl;
		index++;
	}
	return index;
}

void pasteOneSpace(const char s1[], const char s2[])
{
	char a[100]{};
	strcpy_s(a, s1);//strcpy(a, s1)___속성>전처리기>전처리기 정의; _CRT_SECURE_NO_WARNINGS
		strcat_s(a, " ");
	strcat_s(a, s2);
	std::cout << a << std::endl;
}