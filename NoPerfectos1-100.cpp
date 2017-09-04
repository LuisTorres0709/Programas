// NoPerfectos1-100.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int  cont;
	cout << "Numeros perfectos del 1 al 100" << endl;
	cont = 0;
	for (int num = 1; num <= 100; num++) {
		for (int i = 1; i < num; i++) {
			if (num%i == 0) {
				cont += i;
			}
		}
		if (num == cont) {
			cout << num << endl;
		}

		cont = 0;
	}
	system("pause");
	return 0;
}
