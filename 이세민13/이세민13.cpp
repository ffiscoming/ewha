// 이세민13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using intArrayPtr = int*;
int* doubler(const int a[], int size);
void printArray(const int a[], int size);

struct CDAccount
{
	char name[21]{};
	double deposit{};
	double interestrate{};
	int month{};
	double balance{};
};
void setCDAccount(CDAccount& a);
void printCDAccount(const CDAccount& a);

int main()
{
	int a[]{ 1, 2, 3, 4, 5 };
	std::cout << "(in main)array size: " << sizeof(a) << std::endl;//20
	std::cout << "(in main)a: " << a << std::endl;
	std::cout << "(in main)&a: " << &a << std::endl;
	//std::cout << sizeof(int) << std::endl;//4
	//std::cout << sizeof(a) / sizeof(int) << std::endl;//5
	int size{ sizeof(a) / sizeof(int) };
	int* b{ doubler(a, size) };
	std::cout << "Array a: ";
	printArray(a, size);
	std::cout << "Array b: ";
	printArray(b, size);
	delete[] b;

	int d1{}, d2{};
	std::cout << "Enter 2D(d1 X d2) array size (2 integers): ";
	std::cin >> d1 >> d2;
	intArrayPtr* m{ new intArrayPtr[d1] };
	for (int i = 0; i < d1; i++) m[i] = new int[d2];

	std::cout << "Enter " << d1 << " rows of " << d2 << " integers each: \n";
	for (int i = 0; i < d1; i++)
	{
		std::cout << "Enter row " << i + 1 << " (" << d2 << " integers): ";
		for (int j = 0; j < d2; j++) std::cin >> m[i][j];
	}
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; j++) std::cout << m[i][j] << ' ';
		std::cout << std::endl;
	}
	for (int i = 0; i < d1; i++) delete[] m[i];
	delete[] m;

	//CDAccount account{};
	//setCDAccount(account);
	//CDAccount* accountPtr{ &account };
	//printCDAccount(*accountPtr);

	//CDAccount* accountPtr{ new CDAccount{} };
	//setCDAccount(*accountPtr);
	//printArray(*accountPtr);
	//delete accountPtr;

	//const int n{ 2 };
	//CDAccount accountArray[n]{
	//	{"내꺼", 10000, 5, 6, 10250}, {"니꺼", 10000, 5, 6, 10250}
	//};

	//const int n{ 2 };
	//CDAccount accountArray[n]{};
	//for (int i = 0; i < n; i++) setCDAccount(accountArray[i]);
	//for (int i = 0; i < n; i++) printCDAccount(accountArray[i]);

	int x{};
	std::cout << "Enter the number of account: ";
	std::cin >> x;
	CDAccount* accountPtr{ new CDAccount[x] };
	for (int i = 0; i < x; i++) setCDAccount(accountPtr[i]);
	delete[] accountPtr;

	return 0;
}

int* doubler(const int a[], int size)
{
	std::cout << "(in doubler)array size: " << sizeof(a) << std::endl;//8
	std::cout << "(in doubler)a: " << a << std::endl;//=(in main)a
	std::cout << "(in doubler)&a: " << &a << std::endl;//!=(in main)&a
	int* temp{ new int[size] };
	for (int i = 0; i < size; i++) temp[i] = 2 * a[i];
	return temp;
}

void printArray(const int a[], int size)
{
	for (int i = 0; i < size; ++i) std::cout << a[i] << ' ';
	std::cout << std::endl;
}

void setCDAccount(CDAccount& a)
{
	std::cout << "Enter account name(max 20 characters): ";
	std::cin >> a.name;
	std::cout << "Enter account deposit: ";
	std::cin >> a.deposit;
	std::cout << "Enter account interest rate: ";
	std::cin >> a.interestrate;
	std::cout << "Enter the number of months: ";
	std::cin >> a.month;
	a.balance = a.deposit * (1 + a.interestrate / 100.0 * a.month / 12.0);
}

void printCDAccount(const CDAccount& a)
{
	std::cout << "CDAccount name: " << a.name << "\ndeposit: " << a.deposit << "\ninterest rate: " << a.interestrate << "\nmonth: " << a.month << "\nbalance: " << a.balance << std::endl;
}
