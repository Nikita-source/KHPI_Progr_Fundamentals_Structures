/*
Пример 3
Работники предприятия:
- ФИО
- должность
- год рождения
- зар. плата
Вывести:
1) Список и количество инженеров
2) Список работников в возрасте от 30 до 50 лет
3) Средняя зар. плата на предприятии
*/
#include <iostream>

using namespace std;

const int N = 5;		// Количество работников
const int tyear = 2019;	// Текущий год

struct Employee
{
	string name;
	string position;
	int b_year;
	double salary;
};

void printInformation(Employee info[], int N)
{
	int ki = 0;		// Количество инженеров
	int aver = 0;	// Средняя зар. плата

	for (int i = 0; i < N; i++)
	{
		if (info[i].position == "Инженер")
		{
			ki++;
			cout << "Инженер : " << info[i].name << "\n";
		}
		aver += info[i].salary;
	}
	for (int i = 0; i < N; i++)
	{
		if ((tyear - info[i].b_year) > 30 && (tyear - info[i].b_year) < 50)
		{
			cout << "От 30 до 50 : " << info[i].name << "\n";
		}
	}

	cout << "Средняя зар. плата по предприятию = " << aver / N << "\n";

}

int main()
{
	setlocale(LC_ALL, "ru");


	// Задание исходных данных
	Employee info[N] = { {"Иванов И.И.", "Инженер", 1980, 5000},
						 {"Петров П.И.", "Инженер", 1975, 5000},
						 {"Сидоров С.И.", "Мастер", 1970, 5000},
						 {"Васильев В.И.", "Инженер", 1990, 5000},
						 {"Самсонов С.И.", "Инженер", 1995, 5000} };

	// Вывод информации
	printInformation(info, N);

	return 0;
}