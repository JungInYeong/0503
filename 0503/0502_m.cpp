#include "MyFunction.h"

int main()
{
	// �л� ���� ���� ����
	int studentnum= 0;
	vector<string> names(studentnum);	// �̸����� ����
	vector<int>ages;					// ���� ���� ����
	vector<string> births(studentnum);	// ���� ���� ����

	My_Functions::inputStudent(studentnum, names, ages, births);
	cout << endl;

	cout << " 1) �л� ���� ���, 2) ��� ����, 3) ���� ���� ����, 4) ���α׷� ���� " << endl;

	cout << endl;

	int choice;
	while (1)
	{
		cout << "�ñ��� ��ȣ�� �������ּ��� : ";
		cin >> choice;

		switch (choice)
		{
		case 1: // �л��������
			My_Functions::printStudent(names, ages, births);
			cout << endl;
			break;

		case 2: // ��ճ���
			My_Functions::printAverage(ages);
			cout << endl;
			break;

		case 3: // �����������
			My_Functions::printFastbirth(studentnum, names, ages, births);
			cout << endl;
			break;

		case 4: // ���α׷�����
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;

		default:
			cout << "�߸��� �Է��Դϴ�" << endl;
		}
	}

	return 0;
}