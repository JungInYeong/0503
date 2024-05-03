// 실습1 로또 번호 추첨 프로그램

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void Swap(int& a, int& b);
void Sort(int* numbers, int count);
void ChooseLotto(int* numbers);



int main()
{
	srand(time(NULL));
	int lotto[6];

	ChooseLotto(lotto);

	Sort(lotto, 6);

	for (int i = 0; i < 6; i++)
	{
		cout << lotto[i] << " ";
	}

	return 0;
}

void Swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}

void Sort(int* numbers, int count) // numbers는 번호 배열, count는 로또번호 6개
{
	for (int j = 0; j < count - 1; j++) 
	{
		for (int i = 0; i < count - 1; i++) 
		{
			if (numbers[i] > numbers[i + 1])
			{
				Swap(numbers[i], numbers[i + 1]); 
				
			}
		}
	}
}

void ChooseLotto(int* numbers)
{

	int count = 0;
	while (count != 6)
	{
		int number = rand() % 45 + 1; // 0 ~ 44까지 나옴
		bool found = false; // 중복

		//중복 검사기
		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == number)
			{
				found = true;
				break;
			}
		}
		if (found == false) // 중복된 값 없으면 count 올라감
		{
			numbers[count] = number;
			count++;
		}

	}


}