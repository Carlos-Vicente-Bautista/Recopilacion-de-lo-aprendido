//Utilidad de los pasos por referencia 
#include<iostream>
using namespace std;

//Prototipo de la funcion
void triplicar(int &, int &);

int main(){
    /*
    Imaginemos que queremos multiplicar por tres
    los numeros que nos ingrese el usuario
    */
    int a,b;
    cout<<"Digita un numero (a): "; cin>>a;
    cout<<"Digita otro numero (b): "; cin>>b;
    triplicar(a,b);
    cout<<"\nEl valor de 'a' ahora es "<<a<<endl;
    cout<<"El valor de 'b' ahora es "<<b<<endl;
}

void triplicar(int &x, int &y){
    x= 3*x;
    y= 3*y;
}