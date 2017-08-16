// Sueldo.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	float sueldo;
	cout << "Ingresa tu sueldo actual ";
	/*
	Sin necesidad de usar otras variables, calcula el nuevo sueldo de acuerdo a la siguiente tabla
	rango aumento
	0 - 1000 18%
	1001 - 1100 15%
	1101 - 1200 12%
	1201 - 1300 10%
	mas de 1300 8%
	*/
	cin >> sueldo;
	if (sueldo<=1000)
	{
		sueldo = sueldo + (sueldo*(0.18));
	}
	else if (sueldo>1000 && sueldo<=1100)
	{
		sueldo = sueldo + (sueldo*(0.15));
	}
	else if (sueldo>1101 && sueldo <= 1200)
	{
		sueldo = sueldo + (sueldo*(0.12));
	}
	else if (sueldo>1201 && sueldo <= 1300)
	{
		sueldo = sueldo + (sueldo*(0.10));
	}
	else if (sueldo>1300)
	{
		sueldo = sueldo + (sueldo*(0.08));
	}
	cout << "\nTu nuevo sueldo es : " << sueldo<<"\n";
	system("pause");
	return 0;
}