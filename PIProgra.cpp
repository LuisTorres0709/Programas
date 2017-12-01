// PIProgra.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;
void frecuencias(char matr[][70], int tama,int pregunta, int inic, int fin,char registro[15], int contador[15]);//Necesita una casilla de inicio y una de fin, por que en algunos casos, se podía dar mas de una respuesta valida
void inicioYfin(int pregunta, int & inic, int &fin);//Aquí se pondrán los valores de inicio y fin de acuerdo a cuantas respuestas validas se podrían dar en la encuesta
int menu();
int main()
{
	int inic, fin, opcion,pregunta;//Por medio de valores relacionados (Los de & en funciones) se les dará valor a inic y fin...
	int contador[15] = { 0 }; //Aquí se llevará la cuenta de las veces que sale una posible respuesta en cada pregunta, tomando la frecuencia de estas 
	char registro[15];// Un vector que tendrá los registros y respuestas posibles
	char regs[] = "abcdefgh123456789";
	registro[0] = 'a';
	registro[1] = 'b';
	registro[2] = 'c';
	registro[3] = 'd';
	registro[4] = 'e';
	registro[5] = 'f';
	registro[6] = 'g';
	registro[7] = 'h';
	registro[8] = '1';
	registro[9] = '2';
	registro[10] = '3';
	registro[11] = '4';
	registro[12] = '5';
	registro[13] = '6';
	registro[14] = '7';
	char matr[361][70];
	int tama = 361;//Tenemos 361 encuestados
	ifstream archi("c:\\Datos\\Base.txt", ios::in);//Creamos y llenamos la matriz con los datos
	for (int renglon = 0; renglon < tama; renglon++) {//Aquí se ponen todos los datos recabados en una matriz para su mejor manejo...
		for (int colu = 0; colu < 70; colu++) {
			archi >> matr[renglon][colu];
		}
	}
	for (int renglon = 0; renglon < tama; renglon++) {
		for (int columna = 0; columna < 70; columna++) {
			cout << matr[renglon][columna] << "-";
		}
		cout << endl;
	}
	do {
		opcion = menu();
		if (opcion != 0) {
			cout << "Que pregunta de la encuesta será evaluada(1-19) ";
			cin >> pregunta;
			inicioYfin(pregunta, inic, fin);
			frecuencias(matr, tama, pregunta, inic, fin,registro,contador);//Sacará los resultados en forma de tabla a un excel, y con una macros hará una grafica...
		}
	} while (opcion != 0);
	archi.close();
	return 0;
}
void frecuencias(char matr[][70], int tama, int pregunta, int inic, int fin, char registro[15], int contador[15]) {//Es posible que de mas del 100% o tambien menos al sumar las frecuencias en algunas preguntas, debido a las preguntas donde se podía responder mas de una cosa y tambien debidos al caracter 'z' que se usó para Respuesta invalida o si el encuestado decidió no responder
	int frecuenciaacum = 0;
	float frelativa = 0.0, frelacum = 0.0;
	for (int encuestado = 0; encuestado<361 ; encuestado++) {
		for (int columna = inic; columna <= fin; columna++) {
			for (int respuesta = 0; respuesta < 15; respuesta++) {
				if (matr[encuestado][columna] == registro[respuesta]) {
					contador[respuesta]++;
				}
			}
		}
	}
	ofstream excel("c:\\Datos\\SalidaBase.xls");
	excel << "Elemento\t" << "F. Absoluta\t" << "F. abs. acumul.\t" << "F. relativa\t" << "F. relat. acum\n";
	cout << "Elemento\t" << "F. Absoluta\t" << "F. abs. acumul.\t" << "F. relativa\t" << "F. relat. acum\n";
	for (int tabla = 0; tabla < 15; tabla++) {
		frecuenciaacum += contador[tabla];
		frelativa = contador[tabla] / 361.0;
		frelacum += frelativa;
		excel << registro[tabla] << "\t" << contador[tabla] << "\t" << frecuenciaacum << "\t" << frelativa << "\t" << frelacum << "\n";
		cout << registro[tabla] << "\t" << contador[tabla] << "\t" << frecuenciaacum << "\t" << frelativa << "\t" << frelacum << "\n";
	}
	excel.close();
	for (int i = 0; i < 15; i++) {
		contador[i] = 0;
	}
}
void inicioYfin(int pregunta, int & inic, int &fin) {
	switch (pregunta)
	{
	case 1:
		inic = 0;
		fin = 7;
		break;
	case 2:
		inic = 8;
		fin = 8;
		break;
	case 3:
		inic = 9;
		fin = 11;
		break;
	case 4:
		inic = 12;
		fin = 15;
		break;
	case 5:
		inic = 16;
		fin = 16;
		break;
	case 6:
		inic = 17;
		fin = 22;
		break;
	case 7:
		inic = 23;
		fin = 31;
		break;
	case 8:
		inic = 32;
		fin = 32;
		break;
	case 9:
		inic = 33;
		fin = 33;
		break;
	case 10:
		inic = 34;
		fin = 34;
		break;
	case 11:
		inic = 35;
		fin = 42;
		break;
	case 12:
		inic = 43;
		fin = 46;
		break;
	case 13:
		inic = 47;
		fin = 49;
		break;
	case 14:
		inic = 50;
		fin = 55;
		break;
	case 15:
		inic = 56;
		fin = 57;
		break;
	case 16:
		inic = 58;
		fin = 58;
		break;
	case 17:
		inic = 59;
		fin = 67;
		break;
	case 18:
		inic = 68;
		fin = 68;
		break;
	case 19:
		inic = 69;
		fin = 69;
		break;
	default:
		break;
	}
}
int menu() {
	int opcion;
	cout << "Este programa sacara una tabla de frecuencias a un archivo de excel...\n" <<
		"Presiona cualquier numero(excepto 0) para sacar al archivo las estadisticas de una pregunta...\n" <<
		"Presiona 0 para salir del programa...\n";
	cin>>opcion;
	return opcion;
}