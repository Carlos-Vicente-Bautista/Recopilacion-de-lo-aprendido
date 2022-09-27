//funcion con vectores

#include<iostream>
using namespace std;

void llenar(int vec[], int);
void mostrar(int vec[], int);

int main(){
    int vec[20], tam, escalar;
    cout<<"\n\tDATOS\n";
    cout<<"Longitud del vector: "; cin>>tam;
    llenar(vec, tam);
    mostrar(vec, tam);
}

void llenar(int vec[], int tam){
    cout<<"\n\tDATOS\n";
    for(int i=0; i<tam; i++){
        cout<<"Llenar ["<<i<<"]: "; cin>>vec[i];
    }
}

void mostrar(int vec[], int tam){
    cout<<"\n\tMOSTRANDO VECTOR\n";
    for(int i=0; i<tam; i++){
        cout<<"Elemento ["<<i<<"]: "<<vec[i]<<endl;
    }
}