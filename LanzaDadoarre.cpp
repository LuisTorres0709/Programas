#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lanzaDadito();


int main()
{
	srand(time(NULL));
	int dado, cont[6];
	for (int i = 0; i < 6; i++) {
		cont[i] = 0;
	}
	cout << "Lanzamos el dado 100 veces para contabilizar cuantas veces cae cada cara\nLanzando..." << endl;
	for (int i = 1; i <= 100; i++) {
		dado = lanzaDadito();
		switch (dado) {
		case 1:
			cont[0]++;
			break;
		case 2:
			cont[1]++;
			break;
		case 3:
			cont[2]++;
			break;
		case 4:
			cont[3]++;
			break;
		case 5:
			cont[4]++;
			break;
		case 6:
			cont[5]++;
			break;
		default:
			break;
		}
	}
	cout << "La cara 1 salio: " << cont[0] << " veces..." << endl;
	cout << "La cara 2 salio: " << cont[1] << " veces..." << endl;
	cout << "La cara 3 salio: " << cont[2] << " veces..." << endl;
	cout << "La cara 4 salio: " << cont[3] << " veces..." << endl;
	cout << "La cara 5 salio: " << cont[4] << " veces..." << endl;
	cout << "La cara 6 salio: " << cont[5] << " veces..." << endl;
	system("pause");
    return 0;
}

int lanzaDadito() {
	return (1 + rand() % 6);
}
