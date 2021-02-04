/*
������� 7
�������� ��������� "�����":
- ID
- ��� �������
- ����
�� ���� 20 ������, ������� �� ������.
�������� ������� ����������� ���������� �������.
*/

#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string
#include <Windows.h>

using namespace std;

const int N = 20;		// ʳ������ ������

// ��������� ����� ��������������� ��� Animals
enum Animals
{
	ANIMAL_RABBIT,
	ANIMAL_TURKEY
};

struct FarmAnimal
{
	unsigned int id;
	Animals type;
	float weight;
};

// ������� ���������� ������ ���������
void inputAnimails(FarmAnimal animals[], int N)
{
	for (int i = 0; i < N; i++)
	{
		animals[i].id = i + 1;
		animals[i].type = Animals((rand() % 2));
		animals[i].weight = float(rand() % 50) / 10 + 1;

		cout << i << ": " << "id=" << animals[i].id << " ";
		if (animals[i].type == ANIMAL_RABBIT) cout << "������";
		else cout << "�����";
		cout << " " << animals[i].weight << "\n";
	}
}

int findRabbit(FarmAnimal animals[], int N)
{
	int maxWeight = 0;
	int maxWaightRabbitIndex = 0;

	// ����� ������� � ������������ �����
	for (int i = 0; i < N; i++)
	{
		if (animals[i].weight > maxWeight && animals[i].type == ANIMAL_RABBIT)
		{
			maxWeight = animals[i].weight;
			maxWaightRabbitIndex = i;
		}
	}

	return maxWaightRabbitIndex;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int maxWaightRabbitIndex = 0;

	FarmAnimal animals[N];

	while (true)
	{
		// �������� �������� �����
		inputAnimails(animals, N);

		// ����� ������� � ������������ �����
		maxWaightRabbitIndex = findRabbit(animals, N);

		// ��������� ����������
		cout << "������ � ������������ ����� : " << "id=" << animals[maxWaightRabbitIndex].id << " "
			<< "\n";

		system("pause");
		system("cls");
	}

	return 0;
}