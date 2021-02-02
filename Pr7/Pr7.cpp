/*
Пример 6
На ферме 250 животных, кролики и индюки. У каждого есть свой ID.
Найти самого тяжелого кролика.
*/

#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

const int N = 20;		// Количество животных

// Определяем новый перечисляемый тип Animals
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

// Функци заполнения массива животными
void inputAnimails(FarmAnimal animals[], int N)
{
	for (int i = 0; i < N; i++)
	{
		animals[i].id = i + 1;
		animals[i].type = Animals((rand() % 2));
		animals[i].weight = float(rand() % 50) / 10 + 1;

		cout << i << ": " << "id=" << animals[i].id << " ";
		if (animals[i].type == ANIMAL_RABBIT) cout << "Кролик";
		else cout << "Индюк";
		cout << " " << animals[i].weight << "\n";
	}
}

int findRabbit(FarmAnimal animals[], int N)
{
	int maxWeight = 0;
	int maxWaightRabbitIndex = 0;

	// Поиск кролика с максимальным весом
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
	setlocale(LC_ALL, "ru");

	int maxWaightRabbitIndex = 0;

	FarmAnimal animals[N];

	while (true)
	{
		// Задание исходных данных
		inputAnimails(animals, N);

		// Поиск кролика с максимальным весом
		maxWaightRabbitIndex = findRabbit(animals, N);

		// Вывод информации
		cout << "Кролик с максимальным весом : " << "id=" << animals[maxWaightRabbitIndex].id << " "
			<< "\n";

		system("pause");
		system("cls");
	}

	return 0;
}