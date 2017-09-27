#include <iostream>
using namespace std;


int main(){
    int vector[1000];
    for(int i=0; i<1000; i++){
        vector[i]=1;
    }
    cout<<"Coladera de erastotenes"<<endl;
    for (int i=2; i<1000; i++){
        if(vector[i]==1){
            for (int j=2*i; j<1000; j+=i){
                vector[j]=0;
            }
        }
    }
    for(int i=1; i<1000; i++){
        if (vector[i]==1){
            cout<<"El numero "<<i<<" Es primo..."<<endl;
        }
    }
    return 0;
}
