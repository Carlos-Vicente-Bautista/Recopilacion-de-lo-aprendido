//Estructuras con punteros
#include<iostream>
#include<stdlib.h>
using namespace std;

//Estructura
struct persona{
    string nombre;
    int edad;
}*per;

int main(){
    int num;
    cout<<"Cantidad de personas: "; cin>>num;
    per= new persona[num];

    cout<<"\n\tEMPLEADOS\n";
    for(int i=0; i<num; i++){
        cout<<"Nombre: "; fflush(stdin);
        getline(cin,(per+i)->nombre);
        cout<<"Edad: "; cin>>per->edad;
    }

    cout<<"\n\tEMPLEADOS REGISTRADOS\n";
    for(int i=0; i<num; i++){
        cout<<"Nombre: "<<per->nombre;
        cout<<"\nEdad: "<<per->edad;
        cout<<"\n";
    }

    return 0;
}