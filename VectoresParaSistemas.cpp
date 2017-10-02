#include <iostream>
using namespace std;

void menu();
void agregar(int vector[],int num,int &tope);
void mostrar(int vector[], int tope);
int buscar(int vector[], int num);
void eliminar(int vector[], int num);
void insertar(int vector[], int num, int posic, int tope);

int main(){
    int vector[15]={0};
    int num,posic, tope=0, opcion;
    do{
    menu();
    cin>>opcion;
    switch(opcion){
    case 1:
        cout<<"Inserta Numero: ";
        cin>>num;
        agregar(vector, num, tope);
        break;
    case 2:
        mostrar(vector, tope);
        break;
    case 3:
        cout<<"Que numero buscas? ";
        cin>>num;
        cout<<"El numero "<<num<<" Esta en la posicion "<<buscar(vector, num)+1;
        break;
    case 4:
        cout<<"Inserta Numero a borrar: ";
        cin>>num;
        eliminar(vector,num);
        break;
    case 5:
        cout<<"Inserta Numero: ";
        cin>>num;
        cout<<"Inserta posicion: ";
        cin>>posic;
        insertar(vector, num, posic, tope);
        break;
    default:
        break;
    }
    }while(opcion!=0);
}

void menu(){
    cout<<"Menu \n"<<
        "1.- Agrega un numero al vector... \n"<<
        "2.- Muestra el vector... \n"<<
        "3.- Busca un valor en el vector... \n"<<
        "4.- Elimina un valor del vector... \n"<<
        "5.- Inserta numero... \n"<<
        "Presiona 0 para salir... \n";
}
void agregar(int vector[],int num,int &tope){
    if(tope<=14){
    vector[tope]=num;
    tope++;
    }
}
void mostrar(int vector[], int tope){
    for(int i=0; i<=tope; i++){
        cout<<vector[i]<<" En la posicion "<<i+1<<endl;
    }
}
int buscar(int vector[], int num){
    int posicionalv;
    for(int i=14; i>=0; i--){
        if(vector[i]==num){
            posicionalv=i;
        }
    }
 return posicionalv;
}
void eliminar(int vector[], int num){
    for(int i=0; i<15; i++){
        if(vector[i]==num){
            vector[i]=0;
        }
    }
}
void insertar(int vector[], int num, int posic,int tope){
    if(posic<=tope){
    vector[posic-1]=num;
    }
}
