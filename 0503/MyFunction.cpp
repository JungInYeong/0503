#include "MyFunction.h"



void inputStudent(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births)
{
	//studentnum;
	cout << "�л� ���� �Է��ϼ��� : ";
	cin >> studentnum;

	for (int i = 0; i < studentnum; ++i)
	{
		string name;
		cout << "�̸��� �Է��ϼ��� : ";
		cin >> name;
		names.push_back(name);


		int age;
		cout << "���̸� �Է��ϼ��� : ";
		cin >> age;
		ages.push_back(age);

		string birth;
		cout << "������ �Է����ּ��� (mmdd ����) : ";
		cin >> birth;
		births.push_back(birth);
	}
}

void printStudent(vector<string>& names, vector<int>& ages, vector<string>& births)
{
	cout << endl;

	cout << " �л� ����  " << endl;

	for (int i = 0; i < names.size(); i++)
	{
		cout << "�̸� : " << names[i] << " ���� : " << ages[i] << " ���� : " << births[i] << endl;

	}
	cout << endl;
}

void printAverage(vector<int>& ages)
{
	int totalage = 0; // ��ü ���� �� ����

	//ages ������ ����� �� �л��� ���̸� totalage�� ����
	for (int age : ages)
	{
		totalage += age;
	}
	// ��ճ��� ���
	double average = double(totalage) / ages.size();

	cout << "��� ���� : " << average << "��" << endl;
	cout << endl;
}

void printFastbirth(int studentnum, vector<string>& names, vector<int>& ages, vector<string>& births)
{
	string earlybirth = "1231"; //�ʱⰪ�� ���� ū ���ϰ�
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
	cout << "���� ���� ������ �̸� : " << earlyname << " ���� : " << earlyage << "�� ���� : " << earlybirth << endl;

	cout << endl;
}
