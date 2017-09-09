#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

float cose(int lim, float x);
float seno(int lim, float x);
float loga(int lim, float x);
int main() {
	const float pi = 3.1416;
	int opcion, limite;
	float valor;
	do {
		cout << "1.- Calcula Seno\n" <<
			"2.- Calcula Coseno\n" <<
			"3.- Calcula Logaritmo Natural\n" <<
			"Presiona 0 para salir...";
		cin >> opcion;
		switch (opcion) {
			case 1:
				cout << "Dime un limite: ";
				do {
					cin >> limite;
					cout << "Dame un valor en radianes(Solo Hasta 2pi..., Puedes usar decimales.)";
					cin >> valor;
				} while (valor >(2*pi)  || valor < 0);
				cout << "El seno de " << valor << " es " << seno(limite, valor);
				system("pause");
				system("cls");
				break;
			case 2:
				cout << "Dime un limite: ";
				do {
					cin >> limite;
					cout << "Dame un valor en radianes(Solo Hasta 2pi..., Puedes usar decimales.)";
					cin >> valor;
				} while (valor > 2*pi || valor < 0);
				cout << "El coseno de " << valor << " es " << cose(limite, valor);
				system("pause");
				system("cls");
				break;
			case 3:
				cout << "Dime un limite: ";
				
				cin >> limite;
				cout << "Dame un valor: ";
				cin >> valor;
				
				cout << "El Ln de " << valor << " es " << loga(limite, valor);
				system("pause");
				system("cls");
				break;
			default:
				break;
		}
	} while (opcion != 0);
}

float seno(int lim, float x) {
	float res, band, x1=1;
	res = x;
	band = 3;
	float factor = 1;
	for (int i = 1; i <= lim; i ++) {
		if (i % 2 == 1) {
			for (float facto = 1; facto <= band; facto++) {
				factor *= facto;
				x1 *= x;
			}
			res -= x1 / factor;
		}
		else {
			for (float facto = 1; facto <= band; facto++) {
				factor *= facto;
				x1 *= x;
			}
			res += x1 / factor;
		}
		x1 = 1;
		factor = 0;
		band += 2;
	}
	return res;
}
float cose(int lim, float x) {
	float res=1, band, x1=1;
	band = 2;
	int factor = 1;
	for (int i = 1; i <= lim; i++) {
		if (i % 2 == 1) {
			for (float facto = 1; facto <= band; facto++) {
				factor *= facto;
				x1 *= x;
			}
			res -= (x1/factor);
		}
		else {
			for (float facto = 1; facto <= band; facto++) {
				factor *= facto;
				x1 *= x;
			}
			res += (x1/factor);
		}
		x1 = 1;
		factor = 0;
		band += 2;
	}
	return res;
}

float loga(int lim, float x) {
	float res = (x-1)/x, res1=res, x1=(x-1)/x;
	for (float i = 2; i <= lim; i++) {
		for (float exp = 2; exp <= i; exp++) {
			x1 *= x1;
		}
		res += (1 / i)*x1;
		x1 = (x - 1) / x;
	}
	return res;
}