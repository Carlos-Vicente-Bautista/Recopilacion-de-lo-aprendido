//Funciones, pasos por parametros y referencia

#include<iostream>
using namespace std;

//Prototipo de la funcion por valor
int sumar(int, int);
//prototipo de la funcion por referencia 
void suma(int &,int &);

int main(){
    //Como usar los pasos por valor
    int a, b, guardar;
    cout<<"Digita un numero: "; cin>>a;
    cout<<"Digita otro numero: "; cin>>b;
    guardar= sumar(a,b);
    cout<<"\nLa suma es: "<<guardar<<endl;
    //Como usar los pasos por referencia
    suma(a,b);
    cout<<"La suma es: "<<a<<endl;
}

//Funcion con pasos por valor
int sumar(int x, int y){
    int resultado;
    resultado = x+y;
    return resultado;
}

//Funcion con pasos por referencia
void suma(int &x, int &y){
    int aux;
    aux=x;
    x= aux+y;
}