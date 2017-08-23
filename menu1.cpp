// menu1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int opcion;
	do {
		cout << "Menu\n" << "1.-Ver si un Numero es primo\n" << "2.- Calcular factorial de un numero\n" << "3.-Leer Calificaciones\n" << " inserta 0 para salir...\n";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			int num, cont;
			cout << "Numero primo\n" << "Ingresa numero: ";
			cin >> num;
			cont = 0;
			for (int i = 1; i < num + 1; i++) {
				if (num % 1 == 0) {
					cont++;
				}
			}
			if (cont > 2) {
				cout << "Es primo\n";
			}
			else
			{
				cout << "No es primo\n";
			}
			break;
		case 2:
			cout << "Calcular Factorial\n" << "Inserta el numero: ";
			int numero, fact;
			cin >> numero;
			fact = 1;
			for (int i = 1; i <= numero; i++) {
				fact = fact*i;
			}
			cout << "El factorial es: " << fact<<"\n";
			break;
		case 3:
			cout << "Promedio de calificacion. (Dejara de pedir valores cuando se ingrese un -1)\n";
			int calif, num1, conta, prom;
			conta = 0;
			num1 = 0;
			calif = 0;
			do {
				cout << "Inserta calificacion: ";
				cin >> num1;
				if(num1!=-1){
						calif = num1 + calif;
						conta++;
					}
			} while (num1 != -1);
			prom = (calif) / conta;
			cout << "El promedio es: " << prom<<"\n";
			break;
		default:
			break;
		}
	} while (opcion != 0);
	return 0;
	system("pause");
}