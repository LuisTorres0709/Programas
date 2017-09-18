#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenar(int vec[], int tama);
void mostrar(int vec[], int tama);
void mostrarinv(int vec[], int tama);
int suma(int vec[], int tama);
int main(){
    int tamano, opcion;
    cout<<"Vectorsihos...\n"<<
        "De que tamaño te gusta? 7u7: ";
    cin>>tamano;
    int vectorsisho[tamano];
    do{
        cout<<"1.- Te lo lleno... 7u7...\n"<<
            "2.- Te muestro mi vector? ...\n"<<
            "3.- Te lo muestro invertido?...\n"<<
            "4.- Te lo sumo? 7u7...\n"<<
            "Presiona 0 pa salir ;:v"<<endl;
        cin>>opcion;
        switch(opcion){
        case(1):
            cout<<"Te lo lleno 7u7..."<<endl;
            llenar(vectorsisho, tamano);
            break;
        case(2):
            cout<<"Te lo muestro 7u7..."<<endl;
            mostrar(vectorsisho, tamano);
            break;
        case(3):
            cout<<"Te lo muestro invertido 7u7..."<<endl;
            mostrarinv(vectorsisho, tamano);
            break;
        case(4):
            cout<<"La suma es: "<<suma(vectorsisho, tamano)<<endl;
            break;
        default:
            break;
        }
    }while(opcion!=0);
    return 0;
}
void llenar(int vec[], int tama){
    for(int i=0; i<tama; i++){
        vec[i]=i+1;
    }
}
void mostrar(int vec[], int tama){
    for(int i=0; i<tama; i++){
        cout<<vec[i]<<endl;
    }
}
void mostrarinv(int vec[], int tama){
    for(int i=(tama-1); i>=0; i--){
        cout<<vec[i]<<endl;
    }
}
int suma(int vec[], int tama){
    int sumita=0;
    for(int i=0; i<tama; i++){
        sumita+=vec[i];
    }
    return sumita;
}
