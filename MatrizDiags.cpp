#include <iostream>
#include <stdlib.h>
using namespace std;

void llenar(int mat[][5], int rengt);
void mostrar(int mat[][5], int rengt);
void llenarporcolumna(int mat[][5], int rengt);
void diagonalprincipal(int mat[][5], int rengt);
void diagonalsecundaria(int mat[][5], int rengt);
int menu();
void arribadiagonalprincipal(int mat[][5], int rengt);
void abajodiagonalprincipal(int mat[][5], int rengt);
int main() {
	int matriz[5][5], opcion;
	do {
		opcion = menu();
		switch (opcion) {
		case 1:
			llenar(matriz, 5);
			
			break;
		case 2:
			mostrar(matriz, 5);
			
			break;
		case 3:
			llenarporcolumna(matriz, 5);
			
			break;
		case 4:
			diagonalprincipal(matriz, 5);
			
			break;
		case 5:
			diagonalsecundaria(matriz, 5);
			
			break;
		case 6:
			arribadiagonalprincipal(matriz, 5);
			
			break;
		case 7:
			abajodiagonalprincipal(matriz, 5);
			
			break;
		default:
			break;
		}
	} while (opcion != 0);
}

int menu() {
	int opcion = 0;
	cout << "1.- llenar matriz \n" <<
		"2.- Mostrar matriz\n" <<
		"3.- Llenar por columa\n" <<
		"4.- Diagonal principal\n"<<
		"5.- Diagonal secundaria\n"<<
		"6.- Sobre la diagonal principal\n"<<
		"7.- Debajo de la diagonal principal\n"<<
		"Pulsa 0 para salir...0\n";
	cin >> opcion;
	return opcion;
}

void llenar(int mat[][5], int rengt) {

	int valor = 1;
	for (int column = 0; column<5; column++) {
		for (int reng = 0; reng<rengt; reng++) {
			mat[column][reng] = valor;
			valor++;
		}
	}
}

void mostrar(int mat[][5], int rengt) {
	for (int column = 0; column<5; column++) {
		for (int reng = 0; reng<rengt; reng++) {
			cout << mat[column][reng] << " - ";
		}
		cout << endl;
	}
}

void llenarporcolumna(int mat[][5], int rengt) {
	int valor = 1;
	for (int reng = 0; reng<rengt; reng++) {
		for (int column = 0; column<5; column++) {
			mat[column][reng] = valor;
			valor++;
		}
	}
}
void diagonalprincipal(int mat[][5], int rengt) {
	for (int diag = 0; diag<5; diag++) {
		cout << mat[diag][diag] << ", ";
	}
	cout << endl;
}
void diagonalsecundaria(int mat[][5], int rengt) {
	for (int diag = 4, renglon = 0; renglon < rengt; renglon++, diag--) {
		cout << mat[renglon][diag] << endl;
	}
}
void arribadiagonalprincipal(int mat[][5], int rengt) {
	for (int renglon = 0; renglon < rengt; renglon++) {
		for (int arriba = renglon + 1; arriba < 5; arriba++) {
			cout << mat[renglon][arriba] << endl;
		}
	}
}
void abajodiagonalprincipal(int mat[][5], int rengt) {
	for (int renglon = 1; renglon < rengt; renglon++) {
		for (int abajo = 0; abajo < renglon; abajo++) {
			cout << mat[renglon][abajo] << " | ";
		}
		cout << endl;
	}
}
