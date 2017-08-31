// MenuConstantEuler.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int opcion;
	do {
		cout << "Constante de Euler" << endl;
		cout << "1.-Calcular aproximación\n" << "2.-Calcular e^x\n" << "Presiona 0 para salir...\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			float e, fact, exac;
			cout << "Calculamos el valor aproximado de e \n" << "Inserta hasta donde quieres que llegue la aproximacion: ";
			cin >> exac;
			e = 1;
			fact = 1;
			for (int i = 1; i <= exac; i++) {
				for (int j = 1; j <= i; j++) {
					fact *= j;
				}
				e += (1 / fact);
			}
			cout << "La aproximacion de e es igual a " << e << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			float ex, facto, exact,x, x1;
			ex = 1;
			facto = 1;
			exact = 1;
			x1 = 1;
			cout << "Calculamos el valor de e^2\n" << "Inserta que tan exacto quieres el resultado: ";
			cin >> exact;
			cout << "Inserta el valor de x: ";
			cin >> x;
			for (int i = 1; i <= exact; i++) {
				for (int j = 1; j <= i; j++) {
					facto *= j;
					x1 *= x;
				}
				ex += (x1 / facto);
			}
			cout << "El valor de e^" << x << "es aproximado a: " << ex << endl;
			system("pause");
			system("cls");
			break;
		default:
			break;
		}
	} while (opcion != 0);
    return 0;
}

