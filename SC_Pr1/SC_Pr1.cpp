/*
������� 1 �� ���������� Simple Code �� ���� ��������� � ������������� (enum)
https://www.youtube.com/watch?v=BMmbQ81lQd0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=145&t=0s

�������� ��������� ��������� ���� �� ����� ����'����� (���������, ���������, �����),
������ ����, � ������� �� ����

*/
#include <iostream>	// std::cout
#include <Windows.h>

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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	PC pc;							// ��������� ����'�����

	pc.name = "My computer";		// �������� ���� ����'�����
	pc.State = PC::PCState::OFF;	// ���� ����� ����'����� � ����������

	// ��������� ����� ����'�����
	cout << "����'���� <" << pc.name;
	switch (pc.State)
	{
	case PC::PCState::OFF:
		cout << "> ����������" << "\n";
		break;
	case PC::PCState::ON:
		cout << "> ������" << "\n";
		break;
	case PC::PCState::SLEEP:
		cout << "> �����" << "\n";
		break;
	default:
		break;
	}

	return 0;
}