#pragma once
#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<list>


using namespace std;


void inputStudent(int studentnum, vector<string>& names,  vector<int>& ages, vector<string>& births);
void printStudent(vector<string>& names, vector<int>& ages, vector<string>& births); // �л� ���� ��� �Լ�
void printAverage(vector<int>& ages); // ��ճ��� ���ϴ� �Լ�
void printFastbirth(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births);  // ������� ���� ���ϴ� �Լ�