include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;

int buscar(char texto[], char cadena[]);

int main()
{
	char cadena[20], texto[200] = { "Hay 3 cosas que son necesarias para la salvacion del hombre: El saber que debe creer, el saber que debe querer y el saber que debe hacer..." };
	cout << texto<<endl;
	cout << "Dame la palabra a buscar..: "; cin >> cadena;
	int posicion = buscar(texto, cadena);
	if (posicion == 1)
		cout << "La palabra no se encontro en el texto";
	else
		cout << "La palabra comienza en la posicion..: " << posicion;
	system("pause");
	return 0;
}
int buscar(char texto[], char cadena[])
{
	int contador = 0, contador2 = 0;
	for (contador=0; contador <= strlen(texto);contador++)
	{
		if (cadena[contador2] == texto[contador])
		{
			contador++, contador2++;
			if (contador2 == strlen(cadena))
				return (contador - contador2);
		}
		else
		{
			if (contador2 == 0)
				contador++;
			else
				contador += contador2 - 1, contador2 = 0;
		}
	}
	return 1;
}
