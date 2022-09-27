//Uso de punteros en arreglos
#include<iostream>
using namespace std;

int main(){
    int numero[25], *dir, num;
    
    //Rellenando el arreglo
    cout<<"Longitud del arreglo: "; cin>>num;
    cout<<"\n";    
    for(int i=0; i<num ;i++){
        cout<<"Elemento ["<<i<<"]: "; cin>>numero[i];
    }
    
    //Guardando la direccion 
    dir= &numero[0];

    //Determinar el menor elemento y mostrar direccion
    int menor, aux;
    for(int i=0; i<num; i++){
        if(i==0){
            menor= *dir;
        }
        else if(*dir<menor){
            menor= *dir;
        }
        dir++;
    }

    //Mostrando el menor elemento
    cout<<"\nEl menor elemento es: "<<menor;

    return 0;
}