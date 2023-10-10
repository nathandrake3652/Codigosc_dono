#pragma once
#include <iostream>
#include "Softwares.h"
class Juego:public Software{
    private:
    string genero;
    int horas_jugadas =0;
    public:
    Juego(string nombre,string developer,int clasificacion,int precio, string genero);
    ~Juego();
    string getgenre();
    void setgenre(string genero);
    void jugar();
    int horas();
};
Juego::Juego(string nombre,string developer,int clasificacion,int precio, string genero):Software(nombre,developer,clasificacion,precio){//constructor con herencia
}
Juego::~Juego(){//destructor

}
string Juego::getgenre(){ //getter
    return this ->genero;
}
void Juego::setgenre(string genero){//setter
    this -> genero = genero;
}
void Juego:: jugar(){//funcion que aumenta las horas jugadas de un juego
    int horas=0;
    cout<<"Ingrese cuantas horas jugara"<<endl;
    cin>>horas;
    this -> horas_jugadas = horas_jugadas +horas;
}

int Juego::horas(){ //getter
    return this -> horas_jugadas;
}