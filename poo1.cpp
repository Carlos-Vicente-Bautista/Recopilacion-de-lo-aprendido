#include<iostream>
using namespace std;

class persona{
    private:
        string nombre;
        int edad;
    public:
        persona(string, int);
        void datos();
};

class empleado : public persona{
    private:
        float sueldo;
    public:
        empleado(string, int, float);
        void mostrarE();
};

class estudiante : public persona{
    private:
        string codigo;
    public:
        estudiante(string, int, string);
        void mostrarEstudiante();
};

class universitario : public estudiante{
    private:
        string FechaExamen;
    public:
        universitario(string, int, string, string);
        void mostrarUniversitario();
};

//clase padre
persona::persona(string _nombre, int _edad){
    nombre= _nombre;
    edad= _edad;
};

//clase hija 
empleado::empleado(string _nombre, int _edad, float _sueldo) : persona(_nombre, _edad){
    sueldo= _sueldo;
}

//clase hija (estudiante)
estudiante::estudiante(string _nombre, int _edad, string _codigo) : persona(_nombre, _edad){
    codigo= _codigo;
}

//clase hija de estudiante
universitario::universitario(string _nombre, int _edad, string _codigo, string _FechaExamen) : estudiante(_nombre,_edad,_codigo){
    FechaExamen= _FechaExamen;
}

void persona::datos(){
    cout<<"Hola mi nombre es "<<nombre<<" y tengo "<<edad<<" anios";
}

void empleado::mostrarE(){
    datos();
    cout<<" y mi sueldo es "<<sueldo;
}

void estudiante::mostrarEstudiante(){
    datos();
    cout<<" y mi codigo es "<<codigo;
}

void universitario::mostrarUniversitario(){
    mostrarEstudiante();
    cout<<" y mi examen es en "<<FechaExamen;
}

int main(){
    universitario u1("Carlos",17,"2022-119097","20/09/2022");
    u1.mostrarUniversitario();
    return 0;
}