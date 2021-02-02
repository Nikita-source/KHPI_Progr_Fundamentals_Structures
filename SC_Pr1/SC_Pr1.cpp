/*
Пример 1 по материалам Simple Code на тему структуры и перечисления (enum)
https://www.youtube.com/watch?v=BMmbQ81lQd0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=145&t=0s

Создать структуру хранения имени и состояния компьютера (включен, выключен, спит),
задать состояние, и вывести на печать

*/
#include <iostream>	// std::cout

using namespace std;

struct PC
{
	enum PCState
	{
		ON,
		OFF,
		SLEEP
	} State;
	string name;
};

int main()
{
	setlocale(LC_ALL, "ru");

	PC pc;							// Создание компрьютера

	pc.name = "My computer";		// Задание имени компьютера
	pc.State = PC::PCState::OFF;	// Переключение состояния компьютера в Выключен

	// Вывод состояния компьютера
	cout << "Компьютер <" << pc.name;
	switch (pc.State)
	{
	case PC::PCState::OFF:
		cout << "> выключен" << "\n";
		break;
	case PC::PCState::ON:
		cout << "> работает" << "\n";
		break;
	case PC::PCState::SLEEP:
		cout << "> спит" << "\n";
		break;
	default:
		break;
	}

	return 0;
}