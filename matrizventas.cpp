#include <iostream>
using namespace std;


int main()
{
	char respuesta;
	int mat[6][5], aumento;
	for (int ren = 0; ren < 6; ren++) {
		for (int col = 0; col < 5; col++) {
			mat[ren][col] = 0;
		}
	}
	do {
		for (int vendedor = 0; vendedor < 4; vendedor++) {
			cout << "Reporte del vendedor " << vendedor + 1 << ":\n";
			for (int producto = 0; producto < 5; producto++) {
				cout << "Unidades vendidas del producto " << producto + 1 << " por el vendedor " << vendedor + 1 << ": ";
				cin >> aumento;
				mat[producto][vendedor] += aumento;
				mat[5][vendedor] += mat[producto][vendedor];
				mat[producto][4] += mat[producto][vendedor];
			}
		}
		cout << "¿Hay mas hojas de reporte?(s/n): ";
		cin >> respuesta;
	} while (respuesta != 'n');
	for (int producto = 0; producto < 5; producto++) {
		cout << "Totales vendidos del producto " << producto + 1 << ": " << mat[producto][4] << endl;
	}
	for (int vendedor = 0; vendedor < 4; vendedor++) {
		cout << "Ventas totales del vendedor " << vendedor + 1 << ": " << mat[5][vendedor] << endl;
	}
    return 0;
}
