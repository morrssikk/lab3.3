// Lab3.3.cpp
// < Шарафан Максим >
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -1)
		y = -x - 1;
	else
		if (-1 < x && x <= 1)
			y = 0;
		else
			if (1 < x && x <= 1 + 2 * R)
				y = sqrt(pow(R, 2) - pow((x - (1 + R)), 2));
			else
				if ( 1 + 2 * R <= x)
					y =-x+1+2*R;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}