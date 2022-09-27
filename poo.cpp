#include<iostream>
#include<stdlib.h>
using namespace std;

class punto{
    private: //atributos
        int x, y;
    public: //metodos
        punto();
        void coordenadas();
        void setpunto(int, int);
        int getpuntoX();
        int getpuntoY();
};

//constructor
punto::punto(){
}

//Para modificar valores sin el constructor
void punto::setpunto(int _x, int _y){
    x= _x;
    y= _y;
}

//Devolver un variable 
int punto::getpuntoX(){
    return x;
}

//Devolver un variable 
int punto::getpuntoY(){
    return y;
}

int main(){
    punto p1;
    
    //Usando los setters
    p1.setpunto(15,20);
    
    //Usando los getters
    cout<<"Coordenadas: ("<<p1.getpuntoX()<<","<<p1.getpuntoY()<<")"<<endl;
    
    return 0;
}