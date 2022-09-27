//Arreglos dinamicos
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    //Declaracion de las variables
    int *vec, num;
    cout<<"Longitud del arreglo: "; cin>>num;
        //Creando un vector dinamico
    vec= new int[num];

    //LLenando el vector
    cout<<"\n";
    for(int i=0; i<num; i++){
        cout<<"Elemento ["<<i<<"]: "; cin>>vec[i];
    }

    //Mostrando el arreglo
    cout<<"\n\tELEMENTOS\n";
    for(int i=0; i<num; i++){
        cout<<"["<<i<<"]: "<<vec[i]<<endl;
    }

    return 0;
}