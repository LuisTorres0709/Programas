// ChicharroneraProCpp.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

void chicharronera(float a,float b,float c);

int main()
{
	float cuad, lin, inde;
	int opcion;
	do {
		cout << "1.- Calcula formula general\n" << "Presiona 0 pa salir veda\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "Sacate la chicharronera que vengo bien cuadratico\n"
				<< "Inserta Termino cuadratico(a): ";
			cin >> cuad;
			cout << "Inserta termino lineal(b): ";
			cin >> lin;
			cout << "Inserta termino independiente(c): ";
			cin >> inde;
			chicharronera(cuad, lin, inde);
			
			break;
		default:
			break;
		}
	} while (opcion != 0);
    return 0;
}

void chicharronera(float a, float b, float c) {
	float xuno, xdos, raiz;
	cout << a << b << c;
	raiz = (b*b)-(4*a*c);
	if (raiz < 0) {
		cout << "El resultado es imaginario chavos" << endl;
		raiz *= -1;
	}
	xuno = ((-b) + sqrt(raiz)) / (2 * a);
	xdos = ((-b) - sqrt(raiz)) / (2 * a);
	cout << "X1= " << xuno << endl <<
		"X2= " << xdos << endl;
	system("pause");
	system("cls");
}