/*
������ 4
�������� ������������ �������� 20 ������� ���� (��������, ��������)
������� ������ �������, � ������� ������������ �������� ������ 150 ��/�
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

const int N = 20;	// ���������� ������� ����

struct Car
{
	string make;
	unsigned short max_speed;
};

// ������� ���������� ������� � ����������� �� ���� (�������� ������� ����)
void inputInfo(Car info[], int N)
{
	for (int i = 0; i < N; i++)
	{
		info[i].make = "Make" + to_string(rand() % N + 1);
		info[i].max_speed = rand() % 9 * 10 + 120;
	}

}

// ������� ������
void printInfo(Car info[], int N)
{
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		if (info[i].max_speed > 150)
		{
			cout << ++n << ": " << info[i].make << " " << info[i].max_speed << "\n";
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	Car info[N];	// ���������� ������� �����

	while (true)
	{
		inputInfo(info, N);	// �������� ������� �����

		cout << "C����� �������, � ������� ������������ �������� ������ 150 ��/�" << "\n";
		printInfo(info, N);	// ������ ����� �����


		system("pause");
		system("cls");
	}
	return 0;
}