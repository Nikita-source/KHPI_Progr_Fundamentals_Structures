/*
������ 3
��������� �����������:
- ���
- ���������
- ��� ��������
- ���. �����
�������:
1) ������ � ���������� ���������
2) ������ ���������� � �������� �� 30 �� 50 ���
3) ������� ���. ����� �� �����������
*/
#include <iostream>

using namespace std;

const int N = 5;		// ���������� ����������
const int tyear = 2019;	// ������� ���

struct Employee
{
	string name;
	string position;
	int b_year;
	double salary;
};

void printInformation(Employee info[], int N)
{
	int ki = 0;		// ���������� ���������
	int aver = 0;	// ������� ���. �����

	for (int i = 0; i < N; i++)
	{
		if (info[i].position == "�������")
		{
			ki++;
			cout << "������� : " << info[i].name << "\n";
		}
		aver += info[i].salary;
	}
	for (int i = 0; i < N; i++)
	{
		if ((tyear - info[i].b_year) > 30 && (tyear - info[i].b_year) < 50)
		{
			cout << "�� 30 �� 50 : " << info[i].name << "\n";
		}
	}

	cout << "������� ���. ����� �� ����������� = " << aver / N << "\n";

}

int main()
{
	setlocale(LC_ALL, "ru");


	// ������� �������� ������
	Employee info[N] = { {"������ �.�.", "�������", 1980, 5000},
						 {"������ �.�.", "�������", 1975, 5000},
						 {"������� �.�.", "������", 1970, 5000},
						 {"�������� �.�.", "�������", 1990, 5000},
						 {"�������� �.�.", "�������", 1995, 5000} };

	// ����� ����������
	printInformation(info, N);

	return 0;
}