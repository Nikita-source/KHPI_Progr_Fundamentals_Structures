/*
Пример 4
Известна максимальная скорость 20 моделей авто (название, скорость)
Вывести список моделей, у которых максимальная скорость больше 150 км/ч
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

const int N = 20;	// Количество моделей авто

struct Car
{
	string make;
	unsigned short max_speed;
};

// Функция заполнения массива с информацией об авто (создание массива авто)
void inputInfo(Car info[], int N)
{
	for (int i = 0; i < N; i++)
	{
		info[i].make = "Make" + to_string(rand() % N + 1);
		info[i].max_speed = rand() % 9 * 10 + 120;
	}

}

// Функция вывода
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

	Car info[N];	// Объявление массива машин

	while (true)
	{
		inputInfo(info, N);	// Создание массива машин

		cout << "Cписок моделей, у которых максимальная скорость больше 150 км/ч" << "\n";
		printInfo(info, N);	// Печать марок машин


		system("pause");
		system("cls");
	}
	return 0;
}