/*
Пример 2
Багаж характеризуется:
- кол-во чемоданов (багажных мест)
- общий вес
Имеется информация о 5 пассажирах (пара чисел).
Посчитать общее количество багажных мест и выяснить,
есть ли пассажиры с 1м багажным местом весом более 30 кг.
*/
#include <iostream>
using namespace std;

const int N = 5;	// Количество пассажиров

struct Info
{
	short kol;
	float ves;
};

void printInformation(Info info[], int N)
{
	int kp = 0;	// Количество пассажиров
	int kv = 0; // Общий вес

	for (int i = 0; i < N; i++)
	{
		kv += info[i].ves;
		if (info[i].kol == 1 && info[i].ves > 30) kp++;
	}

	cout << "Общий вес = " << kv << "\n";
	if (kp != 0)
	{
		cout << "Пассажиров, у которых один чемодан больше 30 гк - " << kp << "\n";
	}
	else cout << "Пассажиров с одним чемоданом больше 30 кг нет" << "\n";
}

int main()
{
	setlocale(LC_ALL, "ru");

	// Задание исходных данных
	Info info[N] = { {2, 15}, {1, 35}, {2, 15}, {1, 45}, {2, 15} };


	// Вывод информации
	printInformation(info, N);


	return 0;
}