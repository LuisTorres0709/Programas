// ImprimeTriang.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void triang1(int tama);
void triang2(int tama);
void triang3(int tama);
void triang4(int tama);

int main() {
	int opcion, tama;
	do {
		cout << "Triangulos :v\n" << "1.- Triangulo 1\n" << "2.- Triangulo 2\n" << "3.- Triangulo 3\n" << "4.- Triangulo 4\n" << "Presiona 0 pa salir\n";
		cin >> opcion;
		if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4) {
			cout << "De que tamaño lo quieres? 7u7: ";
			cin >> tama;
		}
		switch (opcion) {
		case 1:
			triang1(tama);
			break;
		case 2:
			triang2(tama);
			break;
		case 3:
			triang3(tama);
			break;
		case 4:
			triang4(tama);
			break;
		default:
			break;
		}
		system("cls");
	} while (opcion != 0);
}
void triang1(int tama) {

	for (int i = 1; i <= tama; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
}
void triang2(int tama) {

	for (int i = tama; i>0; i--) {
		for (int j = i; j>0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
}
void triang3(int tama) {
	for (int lin = 1; lin <= tama; lin++) {
		for (int i = (tama - lin); i>0; i--) {
			cout << " ";
		}
		for (int ast = 1; ast <= lin; ast++) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
}

void triang4(int tama) {
	for (int lin = 0; lin < tama; lin++) {
		for (int esp = lin; esp > 0; esp--) {
			cout << " ";
		}
		for (int ast = (tama - lin); ast > 0; ast--) {
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	system("cls");
}