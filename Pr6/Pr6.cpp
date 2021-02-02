/*
Пример 5
Работники предприятия. 20 человек:
- ФИО
- оклад
- стаж работы
Вывести:
Сотрудников с минимальной заработной платой
*/

#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

const int N = 20;		// Количество работников

struct Employee
{
	string name;
	double salary;
	int work_exp;
};

// Функци заполнения массива работников
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

	// Поиск минимальной зар.платы
	for (int i = 0; i < N; i++)
	{
		if (workers[i].salary < min) min = workers[i].salary;
	}
	// Вывод сотрудников с мин зар.платой
	cout << "Сотридник/и с минимальной заработной платой:" << "\n";
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
	setlocale(LC_ALL, "ru");

	Employee workers[N];

	while (true)
	{
		// Задание исходных данных
		inputWokers(workers, N);

		// Вывод информации
		printInformation(workers, N);

		system("pause");
		system("cls");
	}

	return 0;
}