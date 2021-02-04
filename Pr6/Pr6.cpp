/*
������� 6
�������� ��������� "���������� ����������":
- ϲ�
- �����
- ���� ������
� ���������� ��� 20 ����������
�������� ������� ��������� ����������� � ��������� ��������� ������
*/

#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string
#include <Windows.h>

using namespace std;

const int N = 20;		// ʳ������ ����������

struct Employee
{
	string name;
	double salary;
	int work_exp;
};

// ������� ���������� ������ ����������
void inputWokers(Employee workers[], int N)
{
	for (int i = 0; i < N; i++)
	{
		workers[i].name = "WorkerName" + to_string(rand() % N + 1);
		workers[i].salary = (rand() % 10 * 1000 + 5000);
		workers[i].work_exp = (rand() % 30 + 1);
	}
}

void printInformation(Employee workers[], int N)
{
	int min = INT_MAX;

	// ����� �������� ��������
	for (int i = 0; i < N; i++)
	{
		if (workers[i].salary < min) min = workers[i].salary;
	}
	// �������� ����������� � �� ���������
	cout << "����������/� � ��������� ��������� ������:" << "\n";
	for (int i = 0; i < N; i++)
	{
		if (workers[i].salary == min)
		{
			cout << i + 1 << ": " << workers[i].name << " " << workers[i].salary << " " << workers[i].work_exp << "\n";
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Employee workers[N];

	while (true)
	{
		// �������� �������� �����
		inputWokers(workers, N);

		// ��������� ����������
		printInformation(workers, N);

		system("pause");
		system("cls");
	}

	return 0;
}