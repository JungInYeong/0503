#include "MyFunction.h"



void inputStudent(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births)
{
	//studentnum;
	cout << "학생 수를 입력하세요 : ";
	cin >> studentnum;

	for (int i = 0; i < studentnum; ++i)
	{
		string name;
		cout << "이름을 입력하세요 : ";
		cin >> name;
		names.push_back(name);


		int age;
		cout << "나이를 입력하세요 : ";
		cin >> age;
		ages.push_back(age);

		string birth;
		cout << "생일을 입력해주세요 (mmdd 형식) : ";
		cin >> birth;
		births.push_back(birth);
	}
}

void printStudent(vector<string>& names, vector<int>& ages, vector<string>& births)
{
	cout << endl;

	cout << " 학생 정보  " << endl;

	for (int i = 0; i < names.size(); i++)
	{
		cout << "이름 : " << names[i] << " 나이 : " << ages[i] << " 생일 : " << births[i] << endl;

	}
	cout << endl;
}

void printAverage(vector<int>& ages)
{
	int totalage = 0; // 전체 나이 합 변수

	//ages 변수에 저장된 각 학생의 나이를 totalage에 더함
	for (int age : ages)
	{
		totalage += age;
	}
	// 평균나이 계산
	double average = double(totalage) / ages.size();

	cout << "평균 나이 : " << average << "세" << endl;
	cout << endl;
}

void printFastbirth(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births)
{
	string earlybirth = "1231"; //초기값은 가장 큰 생일값
	string earlyname;
	int earlyage = 0;

	for (int i = 0; i < names.size(); i++)
	{
		if (births[i] < earlybirth)
		{
			earlybirth = births[i];
			earlyname = names[i];
			earlyage = ages[i];
		}
	}
	cout << "가장 빠른 생일은 이름 : " << earlyname << " 나이 : " << earlyage << "세 생일 : " << earlybirth << endl;

	cout << endl;
}
