#include "MyFunction.h"

int main()
{
	// 학생 정보 저장 벡터
	int studentnum= 0;
	vector<string> names(studentnum);	// 이름저장 벡터
	vector<int>ages;					// 나이 저장 벡터
	vector<string> births(studentnum);	// 생일 저장 벡터

	My_Functions::inputStudent(studentnum, names, ages, births);
	cout << endl;

	cout << " 1) 학생 정보 출력, 2) 평균 나이, 3) 가장 빠른 생일, 4) 프로그램 종료 " << endl;

	cout << endl;

	int choice;
	while (1)
	{
		cout << "궁금한 번호를 선택해주세요 : ";
		cin >> choice;

		switch (choice)
		{
		case 1: // 학생정보출력
			My_Functions::printStudent(names, ages, births);
			cout << endl;
			break;

		case 2: // 평균나이
			My_Functions::printAverage(ages);
			cout << endl;
			break;

		case 3: // 가장빠른생일
			My_Functions::printFastbirth(studentnum, names, ages, births);
			cout << endl;
			break;

		case 4: // 프로그램종료
			cout << "프로그램을 종료합니다." << endl;
			return 0;

		default:
			cout << "잘못된 입력입니다" << endl;
		}
	}

	return 0;
}