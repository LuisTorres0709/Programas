// ChicharroneraProCpp.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

float chicharroneraxuno(float a,float b,float c);
float chicharroneraxdos(float a,float b,float c);
int raiz(float a, float b, float c);

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
			if (raiz(cuad, lin, inde)==0){
                cout<<"El resultado es Imaginario Chavos"<<endl;
            }
			cout<<"x1= "<<chicharroneraxuno(cuad, lin, inde)<<endl;
			cout<<"x2= "<<chicharroneraxdos(cuad, lin, inde)<<endl;
			system("pause");
			system("cls");
			break;
		default:
			break;
		}
	} while (opcion != 0);
    return 0;
}

float chicharroneraxuno(float a, float b, float c) {
	float xuno, raiz;
	raiz = (b*b)-(4*a*c);
	if (raiz < 0) {

		raiz *= -1;
	}
	xuno = ((-b) + sqrt(raiz)) / (2 * a);
	return xuno;
}
float chicharroneraxdos(float a, float b, float c) {
	float xdos, raiz;

	raiz = (b*b)-(4*a*c);
	if (raiz < 0) {

		raiz *= -1;
	}
	xdos = ((-b) - sqrt(raiz)) / (2 * a);
	return xdos;
}
int raiz(float a, float b, float c){
    if(((b*b)-(4*a*c))<0){
        return 0;
    }
    if(((b*b)-(4*a*c))>0){
        return 1;
    }
}
