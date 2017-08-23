// horastrab.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int hent, ment, sent, hsal, msal, ssal, htotal, mtotal, stotal;
	cout << "Horas de trabajo en el dia\n" << "Ingrese Hora de entrada: \n";
	cout << "Hora de entrada: ";
	cin >> hent;
	cout << "Minutos de entrada: ";
	cin >> ment;
	cout << "Segundos de entrada: ";
	cin >> sent;
	cout << "Hora de entrada: " << hent << " Horas, " << ment << " minutos y " << sent << " segundos.\n" << "Ingrese Hora de salida: \n";
	cout << "Hora de salida: ";
	cin >> hsal;
	cout << "Minutos de salida: ";
	cin >> msal;
	cout << "Segundos de salida: ";
	cin >> ssal;
	htotal = 0;
	mtotal = 0;
	stotal = 0;
	stotal = ssal - sent;
	if (stotal < 0) {
		stotal = stotal + 60;
		mtotal--;
	}
	mtotal = mtotal + (msal - ment);
	if (mtotal < 0) {
		mtotal = mtotal + 60;
		htotal--;
	}
	htotal = htotal + (hsal - hent);
	cout << "Horas trabajadas: " << htotal << " horas, " << mtotal << " minutos y " << stotal << " segundos.\n";
	system("pause");
    return 0;
}

