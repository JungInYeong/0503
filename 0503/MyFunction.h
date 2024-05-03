#pragma once
#ifndef _MYFUC_
#define _MYFUC_
#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

namespace My_Functions
{
	void inputStudent(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births);
	void printStudent(vector<string>& names, vector<int>& ages, vector<string>& births); // 학생 정보 출력 함수
	void printAverage(vector<int>& ages); // 평균나이 구하는 함수
	void printFastbirth(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births);  // 가장빠른 생일 구하는 함수
}

#endif
