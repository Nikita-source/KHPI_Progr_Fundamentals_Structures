/*
������ 7
���������������� ��������� ����� ������:
- ��� ��������
- ������ �������� �� 5 �����������

1) ��������� ������������ ������� ����
2) ����� ������� �� �������� ����� ��������.
��� ������ ����������� � ���� �������.
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

#define N 20		// ���������� ���������
#define M 5			// ���������� ��������� � ������

struct Student
{
	string name;		// ��� ��������
	int marks[M];		// ������ ������ �� ������
	float averageMark;	// ������� ���� �� ������
};

// ������ ���������� ��������� (Roll)
void inputRoll(Student roll[])
{
	// �������� ����
	for (int i = 0; i < N; i++) roll[i].name = "";
	for (int i = 0; i < N; i++)
	{
		// �������� ���������� �����
		bool no_unique = true;
		do {
			roll[i].name = "StName" + to_string(rand() % N + 1);
			for (int j = 0; j < N; j++)
			{
				if (i != j && roll[i].name == roll[j].name) { no_unique = true; break; }
				else no_unique = false;
			}
		} while (no_unique);

		// �������� ������ � �������� �����
		roll[i].averageMark = 0;
		for (int j = 0; j < M; j++)
		{
			roll[i].marks[j] = rand() % 3 + 3;			// 3, 4, 5
			roll[i].averageMark += roll[i].marks[j];	// ������������ ���� ������	
		}
		roll[i].averageMark /= M;						// ������ �������� �����
	}

	// ������ ���������
	printf_s("|------------------------------------|\n");
	printf_s("| N |   ���    |  ������   | ��.���� |\n");
	printf_s("|------------------------------------|\n");
	for (int i = 0; i < N; i++)
	{
		printf_s("|%3d| %-9s|", i, roll[i].name.c_str());
		for (int j = 0; j < M; j++)
		{
			printf_s("%2d", roll[i].marks[j]);
		}
		printf_s(" | %7.1f |\n", roll[i].averageMark);
	}
	printf_s("|------------------------------------|\n");
}

// 1 ������� ���������� ������������� �������� �����
float maxAverageMark(Student roll[])
{
	float max = 0.;
	for (int i = 0; i < N; i++)
	{
		if (roll[i].averageMark > max) max = roll[i].averageMark;
	}
	return max;
}

// 2 ������� ���������� ������� ��������
string leader(Student roll[], float maxAverMark)
{
	for (int i = 0; i < N; i++)
	{
		if (roll[i].averageMark == maxAverMark)
			return roll[i].name;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	Student roll[N];	// ���������� ������� ���������

	while (true)
	{
		inputRoll(roll);	// �������� ������� ��������� - �������� ���������

		// 1 ����� ������������� �������� �����
		float maxAverMark = maxAverageMark(roll);
		cout << "������������ ������� ��� = " << maxAverMark << "\n";

		// 2 ���������� ������� �������� �� ������������� ��. �����
		cout << "������ ������� : " << leader(roll, maxAverMark) << "\n";

		system("pause");
		system("cls");
	}
	return 0;
}