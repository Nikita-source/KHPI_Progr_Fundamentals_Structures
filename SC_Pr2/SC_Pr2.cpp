/*
Приклад 2 за матеріалами Simple Code на тему структури і перерахування (enum)
https://www.youtube.com/watch?v=BMmbQ81lQd0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=145&t=0s

Створити структуру "Літак", в якій зберігалися б константи (у вигляді enum)
швидкісних характеристик літака:
- мінімальна швидкість
- рекомендована швидкість
- максимальна швидкість
Написати функцію, задати швидкість руху літака за допомогою цих констант, і вивести її на друк
*/
#include <iostream>	// std::cout
#include <Windows.h>

using namespace std;

struct Plane
{
	enum PlaneSpeed
	{
		MIN = 150,
		RECOMEND = 600,
		MAX = 800
	} Speed;
	string name;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Plane plane;							// Створення літака

	plane.name = "F-10";					// Завдання імені літака
	plane.Speed = Plane::PlaneSpeed::RECOMEND;	// Завдання поточної швидкості літака

	// Виведення швидкості літака
	cout << "Літак " << plane.name << " рухається на швидкості " << plane.Speed << " км/год \n";

	return 0;
}