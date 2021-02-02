/*
Пример 7
Проанализировать ведомость сдачи сессии:
- ФИО студента
- оценки студента по 5 дисциплинам

1) Вычислить максимальный средний балл
2) Найти лучшего по среднему баллу студента.
Обе задачи реализовать в виде функций.
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

#define N 20		// Количество студентов
#define M 5			// Количество дисциплин в сессии

struct Student
{
	string name;		// Имя студента
	int marks[M];		// Массив оценок за сессию
	float averageMark;	// Средний балл из оценок
};

// Функци заполнения ведомости (Roll)
void inputRoll(Student roll[])
{
	// Очищение имен
	for (int i = 0; i < N; i++) roll[i].name = "";
	for (int i = 0; i < N; i++)
	{
		// Создание уникльного имени
		bool no_unique = true;
		do {
			roll[i].name = "StName" + to_string(rand() % N + 1);
			for (int j = 0; j < N; j++)
			{
				if (i != j && roll[i].name == roll[j].name) { no_unique = true; break; }
				else no_unique = false;
			}
		} while (no_unique);

		// Создание оценок и среднего балла
		roll[i].averageMark = 0;
		for (int j = 0; j < M; j++)
		{
			roll[i].marks[j] = rand() % 3 + 3;			// 3, 4, 5
			roll[i].averageMark += roll[i].marks[j];	// Суммирование всех баллов	
		}
		roll[i].averageMark /= M;						// Расчет среднего балла
	}

	// Печать ведомости
	printf_s("|------------------------------------|\n");
	printf_s("| N |   ФИО    |  Оценки   | Ср.балл |\n");
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

// 1 Функция нахождения максимального среднего балла
float maxAverageMark(Student roll[])
{
	float max = 0.;
	for (int i = 0; i < N; i++)
	{
		if (roll[i].averageMark > max) max = roll[i].averageMark;
	}
	return max;
}

// 2 Функция нахождения лучшего студента
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

	Student roll[N];	// Объявление массива студентов

	while (true)
	{
		inputRoll(roll);	// Создание массива студентов - создание ведомости

		// 1 Поиск максимального среднего балла
		float maxAverMark = maxAverageMark(roll);
		cout << "Максимальный средний бал = " << maxAverMark << "\n";

		// 2 Нахождение лучшего студента по максимальному ср. баллу
		cout << "Лучший студент : " << leader(roll, maxAverMark) << "\n";

		system("pause");
		system("cls");
	}
	return 0;
}