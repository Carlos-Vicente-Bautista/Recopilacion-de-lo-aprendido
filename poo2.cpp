//Usar en un ejercicio polimorfismo
#include<iostream>
#include<stdlib.h>
using namespace std;


//Clase padre ------------------------------------------
class animal{
    private:
        string nombre;
        int edad;
    public:
        animal(string, int);
        virtual void datos();
};
    //Constructor
animal::animal(string _nombre, int _edad){
    nombre= _nombre;
    edad= _edad;
}
    //Metodo
void animal::datos(){
    cout<<"\n\tDATOS\n";
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
//-----------------------------------------------------


//Clase hija ----------------------------------------
class humano : public animal{
    private:
        string apellido;
    public:
        humano(string, int, string);
        void datos();
};
    //Constructor
humano::humano(string _nombre, int _edad, string _apellido) : animal(_nombre,_edad){
    apellido= _apellido;
}
    //Metodo
void humano::datos(){
    animal::datos();
    cout<<"Apellido: "<<apellido<<endl;
}
//---------------------------------------------------


//Clase hija ----------------------------------------
class perro : public animal{
    private:
        string raza;
    public:
        perro(string, int, string);
        void datos();
};
    //Constructor
perro::perro(string _nombre, int _edad, string _raza) : animal(_nombre, _edad){
    raza= _raza;
}
    //Metodo
void perro::datos(){
    animal::datos();
    cout<<"Raza: "<<raza<<endl;
}
//---------------------------------------------------


int main(){
    animal *aux[3];

    aux[0]= new humano("Juan",17,"Vicente");
    aux[0]-> datos();
    return 0;
}