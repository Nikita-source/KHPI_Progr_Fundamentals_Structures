/*
������� 2 �� ���������� Simple Code �� ���� ��������� � ������������� (enum)
https://www.youtube.com/watch?v=BMmbQ81lQd0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=145&t=0s

�������� ��������� "˳���", � ��� ���������� � ��������� (� ������ enum)
��������� ������������� �����:
- �������� ��������
- ������������� ��������
- ����������� ��������
�������� �������, ������ �������� ���� ����� �� ��������� ��� ��������, � ������� �� �� ����
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

	Plane plane;							// ��������� �����

	plane.name = "F-10";					// �������� ���� �����
	plane.Speed = Plane::PlaneSpeed::RECOMEND;	// �������� ������� �������� �����

	// ��������� �������� �����
	cout << "˳��� " << plane.name << " �������� �� �������� " << plane.Speed << " ��/��� \n";

	return 0;
}