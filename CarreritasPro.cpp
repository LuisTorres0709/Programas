// CarreritasPro.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
int probabilidadAleatoria();
int correr(int prob);


int main()
{
	srand(time(NULL));
	int casillas1 = 0, casillas2 = 0;
	int ganador;
	while (casillas1 <= 100 && casillas2 <= 100) {
			casillas1 += correr(probabilidadAleatoria());
			casillas2 += correr(probabilidadAleatoria());
		
			cout << "El corredor 1 recorrio " << casillas1 << " Casillas hasta ahora..."<<endl;
			cout << "El corredor 2 recorrio " << casillas2 << " Casillas hasta ahora..." << endl;
		system("pause");
	}
	if (casillas1 < casillas2) {
		cout << "El corredor 2 gana!!" << endl;
	}
	else if (casillas2 < casillas1) {
		cout << "El corredor 1 gana!!" << endl;
	}
	else {
		cout << "Empatan!!" << endl;
	}
	system("pause");
	return 0;
}

int probabilidadAleatoria() {
	return 1 + rand() % 100;
}
int correr(int prob) {
	if (prob > 0 && prob <= 50) {
		return 1;
	}
	else if (prob > 50 && prob <= 80) {
		return 2;
	}
	else {
		return 3;
	}
}