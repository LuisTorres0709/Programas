#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lanzaDadito();


int main()
{
	srand(time(NULL));
	int dado, cont[6]={0};
	cout << "Lanzamos el dado 100 veces para contabilizar cuantas veces cae cada cara\nLanzando..." << endl;
	for (int i = 1; i <= 100; i++) {
		dado = lanzaDadito();
		cont[dado-1]++;
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
