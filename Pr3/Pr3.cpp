/*
������ 2
����� ���������������:
- ���-�� ��������� (�������� ����)
- ����� ���
������� ���������� � 5 ���������� (���� �����).
��������� ����� ���������� �������� ���� � ��������,
���� �� ��������� � 1� �������� ������ ����� ����� 30 ��.
*/
#include <iostream>
using namespace std;

const int N = 5;	// ���������� ����������

struct Info
{
	short kol;
	float ves;
};

void printInformation(Info info[], int N)
{
	int kp = 0;	// ���������� ����������
	int kv = 0; // ����� ���

	for (int i = 0; i < N; i++)
	{
		kv += info[i].ves;
		if (info[i].kol == 1 && info[i].ves > 30) kp++;
	}

	cout << "����� ��� = " << kv << "\n";
	if (kp != 0)
	{
		cout << "����������, � ������� ���� ������� ������ 30 �� - " << kp << "\n";
	}
	else cout << "���������� � ����� ��������� ������ 30 �� ���" << "\n";
}

int main()
{
	setlocale(LC_ALL, "ru");

	// ������� �������� ������
	Info info[N] = { {2, 15}, {1, 35}, {2, 15}, {1, 45}, {2, 15} };


	// ����� ����������
	printInformation(info, N);


	return 0;
}