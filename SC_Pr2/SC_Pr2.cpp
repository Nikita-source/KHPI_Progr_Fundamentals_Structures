/*
ѕример 2 по материалам Simple Code на тему структуры и перечислени€ (enum)
https://www.youtube.com/watch?v=BMmbQ81lQd0&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=145&t=0s

—оздать структуру самолет, в которой хранились бы константы (в виде enum)
скоростных характеристик самолета:
- минимальна€ скорость
- рекомендуема€ скорость
- максимальна€ скорость
«адать скорость движени€ самолета с помощью этих констант,
и вывести ее на печать
*/
#include <iostream>	// std::cout

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
	setlocale(LC_ALL, "ru");

	Plane plane;							// —оздание самолета

	plane.name = "F-10";					// «адание имени самолета
	plane.Speed = Plane::PlaneSpeed::RECOMEND;	// «адание текущей скорости самолета

	// ¬ывод скорости самолета
	cout << "—амолет " << plane.name << " движетс€ на скорости " << plane.Speed << " км/ч \n";

	return 0;
}