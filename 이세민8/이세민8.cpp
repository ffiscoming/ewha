// 이세민8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

char getGradeFromScore(int score);
void setScoreArray(int scores[], int size);
double computeAverage(const int a[], int size);
void swap(int& a, int& b);
void bubbleSort(int a[], int size);
void showScoreGradeArray(const int scores[], const char grades[], int size);

int main()
{
	const int n{ 5 };
	int a[n]{};
	setScoreArray(a, n);
	std::cout << "average: " << computeAverage(a, n) << std::endl;
	//double avg{ computeAverage(a, n) }; ->avg 값을 자주 이용해야 하는 상황에 편리
		//std::cout << "average: " << avg << std::endl;
		bubbleSort(a, n);
	char grades[n]{};//grades[0]~grades[n-1]: a[0]~a[n-1]
	for (int i = 0; i < n; ++i)
	{
		grades[i] = getGradeFromScore(a[i]);
	}
	showScoreGradeArray(a, grades, n);
	return 0;
}

char getGradeFromScore(int score)
{
	if (score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';
	else return 'F';
}

void setScoreArray(int scores[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		scores[i] = rand() % 101;
		std::cout << scores[i] << " ";
	}
	std::cout << std::endl;
}

double computeAverage(const int a[], int size)
{
	double total{};
	for (int i = 0; i < size; ++i) 
	{
		total += a[i];
	}
	if (size <= 0)
	{
		std::cout << "ERROR: number of elements is 0. computeAverage() returns 0.\n";
			return 0;
	}
	return total / size;
}

void swap(int& a, int& b)
{
	int temp{};
	temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int a[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

void showScoreGradeArray(const int scores[], const char grades[], int size)
{
	std::cout << "sorted scores and grades:\n";
	for (int i = 0; i < size; ++i)
	{
		std::cout << scores[i] << " " << grades[i] << std::endl;
	}
}