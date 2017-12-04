#include <iostream>
#include <string.h>

using namespace std;

bool esPalindromo(char cadena[], int tamaño);
int main() {
	bool bandera;
	char cadena[15];
	cout << "Ingresa la cadena: ";
	cin.getline(cadena,15,'\n');
	int tamano = strlen(cadena);
	bandera = esPalindromo(cadena, tamano);
	if (bandera == true) {
		cout << "Es palindromo \n";
	}
	else 
	{
		cout << "No es palindromo \n"; 
	}
	system("pause");
	return 0;
}

bool esPalindromo(char cadena[], int tamano) {
	for (int i = 0; i < tamano / 2; i++)
		if (cadena[i] != cadena[tamano - i - 1])
			return false;
	return true;
}
