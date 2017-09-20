#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenar(int vec[], int tama);
void mostrar(int vec[], int tama);
void mostrarinv(int vec[], int tama);
int suma(int vec[], int tama);
void girarArriba(int vec[], int tama);
void girarAbajo(int vec[], int tama);
void invertirvector(int vec[], int tama);

int main() {
	int tamano, opcion;
	cout << "Vectorsihos...\n";
	tamano=10;
	int vectorsisho[10];
	do {
		cout << "1.- Te lo lleno... 7u7...\n" <<
			"2.- Te muestro mi vector? ...\n" <<
			"3.- Te lo muestro invertido?...\n" <<
			"4.- Te lo sumo? 7u7...\n" <<
			"5.- Girar Arriba...\n"<<
			"6.- Girar abajo... \n"<<
			"7.- Invertir vector...\n"<<
			"Presiona 0 pa salir ;:v" << endl;
		cin >> opcion;
		switch (opcion) {
		case(1):
			cout << "Te lo lleno 7u7..." << endl;
			llenar(vectorsisho, tamano);
			break;
		case(2):
			cout << "Te lo muestro 7u7..." << endl;
			mostrar(vectorsisho, tamano);
			break;
		case(3):
			cout << "Te lo muestro invertido 7u7..." << endl;
			mostrarinv(vectorsisho, tamano);
			break;
		case(4):
			cout << "La suma es: " << suma(vectorsisho, tamano) << endl;
			break;
		case(5):
			girarArriba(vectorsisho, tamano);
			break;
        case(6):
            girarAbajo(vectorsisho, tamano);
            break;
        case(7):
            invertirvector(vectorsisho, tamano);
            break;
		default:
			break;
		}
	} while (opcion != 0);
	return 0;
}
void llenar(int vec[], int tama) {
	for (int i = 0; i<tama; i++) {
		vec[i] = i + 1;
	}
}
void mostrar(int vec[], int tama) {
	for (int i = 0; i<tama; i++) {
		cout << vec[i] << endl;
	}
}
void mostrarinv(int vec[], int tama) {
	for (int i = (tama - 1); i >= 0; i--) {
		cout << vec[i] << endl;
	}
}
int suma(int vec[], int tama) {
	int sumita = 0;
	for (int i = 0; i<tama; i++) {
		sumita += vec[i];
	}
	return sumita;
}

void girarArriba(int vec[], int tama) {
	int ayuda = vec[0], ayuda1 = vec[1];
	for (int i = 0; i<tama; i++) {
		if (i + 2 >= tama) {
			if (i + 1 == tama) {
				ayuda1 = ayuda;
			}
			else {
				ayuda1 = vec[i + 1];
			}
		}
		vec[i] = ayuda1;
		ayuda1 = vec[i + 2];

	}
}
void girarAbajo(int vec[], int tama){
    int ayuda=vec[tama-1], ayuda1;
    for(int i=tama-1; i>=0; i--){
        ayuda1=vec[i-1];
        vec[i]=ayuda1;
        if(i-1<0){
            vec[i]=ayuda;
        }
    }
}
void invertirvector(int vec[], int tama){
    int ayuda=vec[tama-1],ayuda1;
    for(int i=0, b=tama-1; i<5; i++, b--){
        ayuda1=vec[i];
        ayuda=vec[b];
        vec[i]=ayuda;
        vec[b]=ayuda1;

    }
}
