#include <iostream>
using namespace std;

int menu();
void agregar(int vector[], int num, int &tope);
void mostrar(int vector[], int tope);
int buscar(int vector[], int num, int tope);
void eliminar(int vector[], int num, int &tope);
void insertar(int vector[], int num, int posic, int &tope);

int main() {
	int vector[15] = { 0 };
	int num, posic, tope = 0, opcion;
	do {
		opcion = menu();
		switch (opcion) {
		case 1:
			cout << "Inserta Numero: ";
			cin >> num;
			agregar(vector, num, tope);
			break;
		case 2:
			mostrar(vector, tope);
			break;
		case 3:
			cout << "Que numero buscas? ";
			cin >> num;
			if ((buscar(vector, num, tope)) >= 0) {
				cout << "El numero " << num << " Esta en la posicion " << buscar(vector, num, tope) + 1;
			}
			else {
				cout << "No se encuentra ese numero..." << endl;
			}
			break;
		case 4:
			cout << "Inserta Numero a borrar: ";
			cin >> num;
			eliminar(vector, num, tope);
			break;
		case 5:
			cout << "Inserta Numero: ";
			cin >> num;
			cout << "Inserta posicion: ";
			cin >> posic;
			insertar(vector, num, posic, tope);
			break;
		default:
			break;
		}
	} while (opcion != 0);
}

int menu() {
	int opcion = 0;
	cout << endl << "Menu \n" <<
		"1.- Agrega un numero al vector... \n" <<
		"2.- Muestra el vector... \n" <<
		"3.- Busca un valor en el vector... \n" <<
		"4.- Elimina un valor del vector... \n" <<
		"5.- Inserta numero... \n" <<
		"Presiona 0 para salir... \n";
	cin >> opcion;
	return opcion;
}
void agregar(int vector[], int num, int &tope) {
	if (tope <= 14) {
		vector[tope] = num;
		tope++;
	}
}
void mostrar(int vector[], int tope) {
	for (int i = 0; i<tope; i++) {
		cout << vector[i] << " En la posicion " << i + 1 << endl;
	}
}
int buscar(int vector[], int num, int tope) {
	int posicionalv = -1;
	for (int i = tope; i >= 0; i--) {
		if (vector[i] == num) {
			posicionalv = i;

		}
	}
	return posicionalv;
}
void eliminar(int vector[], int num, int &tope) {
	int lugar;
	for (int i = 0; i <= tope; i++) {
		if (vector[i] == num) {
			lugar = i;
		}
	}
	for (int j = lugar; j <= tope; j++) {
		vector[j] = vector[j + 1];
	}
	tope--;
}
void insertar(int vector[], int num, int posic, int &tope) {
	if (posic <= tope) {
		for (int i = tope; i>=(posic-1); i--) {
			vector[i + 1] = vector[i];
		}
		vector[posic - 1] = num;
		tope++;
	}

}
