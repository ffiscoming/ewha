// 이세민7.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
char score2grade(int score)//리턴형은 char형, 매개변수는 int형 1개, 매개변수 값(90이상, 80이상, 70이상, 60이상, 그외)에 따라 char형('A', 'B', 'C', 'D', 'F')을 리턴
{
	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';
	else return 'F';
}

int main()
{
    std::cout << "02, 2549092, 이세민\n";
	const int n{ 10 };//지역 상수로 배열의 크기를 선언

	int scoreArray[n];//선언한 크기의 int형 배열을 선언하고 초기화

	int i{};

	for (i = 0; i < n; ++i)//선언한 배열의 인덱스 변수의 주소를 for구문을 이용해 콘솔창으로 출력하고 주소가 연속적인 것을 확인
	{
		std::cout << &scoreArray[i] << std::endl;
	}

	int max{}, min{}, total{};//배열을 콘솔창으로 입력받고, 최대값, 최소값, 평균을 구하고 콘솔창으로 출력
	std::cout << "Enter " << n << " scores: \n";
	std::cin >> scoreArray[0];
	max = scoreArray[0];
	min = scoreArray[0];
	total = scoreArray[0];
	for (i = 1; i < n; ++i)
	{
		std::cin >> scoreArray[i];
		if (scoreArray[i] > max) max = scoreArray[i];
		if (scoreArray[i] < min) min = scoreArray[i];
		total += scoreArray[i];//total = total + scoreArray[i];

		//std::cout << i << ": ";
		//for (int j = 0; j < i+1; ++j)
		//{
		// std::cout << scoreArray[j] << " ";
		//}
		//std::cout << std::endl;
		//std::cout << "max: " << max << std::endl;
		//std::cout << "min: " << min << std::endl;
	}
	std::cout << "max: " << max << std::endl << "min: " << min << std::endl << "avg: " << static_cast<double>(total) / n << std::endl;
	//배열의 인덱스 변수 하나를 1번 함수에 인자로 넣어 호출한 후 그 리턴값을	콘솔창으로 출력
	std::cout << scoreArray[5] << ": " << score2grade(scoreArray[5]) << std::endl;
	return 0;
}
