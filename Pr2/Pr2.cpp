/*
Приклад 2
Створити структуру "Книга" 
- автор
- назва
- рік
Написати функцію заповнення бібліотеки 100 книгами.
Надрукувати авторів і назви книг, рік видання яких раніше 1900
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

const int SIZE = 100;	// Количество книг в библиотеке

struct Book
{
	string author;
	string name;
	unsigned short year;
};

// Функція заповнення бібліотеки (створення масиву книг) 
void inputLibrary(Book lib[], int lib_size)
{
	for (int i = 0; i < lib_size; i++)
	{
		lib[i].author = "Author" + to_string(rand() % lib_size + 1);
		lib[i].name = "Name" + to_string(rand() % lib_size + 1);
		lib[i].year = (rand() % 170 + 1850);
	}

}

// Функція друку книг, рік видання яких раніше 1900
void printBooks(Book lib[], int lib_size, int age_less_than)
{
	int n = 0;
	for (int i = 0; i < lib_size; i++)
	{
		if (lib[i].year < 1900)
		{
			cout << ++n << ": " << lib[i].author << " " << lib[i].name << " " << lib[i].year << "\n";
		}

	}

}

int main()
{

	Book Library[SIZE];	// Оголошення масиву книг

	while (true)
	{
		inputLibrary(Library, SIZE);	// Створення масиву книг

		printBooks(Library, SIZE, 1900);	// Друк книг, які відповідають вимогам


		system("pause");
		system("cls");
	}
	return 0;
}