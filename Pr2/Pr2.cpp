/*
������� 2
�������� ��������� "�����" 
- �����
- �����
- ��
�������� ������� ���������� �������� 100 �������.
����������� ������ � ����� ����, �� ������� ���� ����� 1900
*/
#include <iostream>	// std::cout
#include <string>	// std::string, std::to_string

using namespace std;

const int SIZE = 100;	// ���������� ���� � ����������

struct Book
{
	string author;
	string name;
	unsigned short year;
};

// ������� ���������� �������� (��������� ������ ����) 
void inputLibrary(Book lib[], int lib_size)
{
	for (int i = 0; i < lib_size; i++)
	{
		lib[i].author = "Author" + to_string(rand() % lib_size + 1);
		lib[i].name = "Name" + to_string(rand() % lib_size + 1);
		lib[i].year = (rand() % 170 + 1850);
	}

}

// ������� ����� ����, �� ������� ���� ����� 1900
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

	Book Library[SIZE];	// ���������� ������ ����

	while (true)
	{
		inputLibrary(Library, SIZE);	// ��������� ������ ����

		printBooks(Library, SIZE, 1900);	// ���� ����, �� ���������� �������


		system("pause");
		system("cls");
	}
	return 0;
}