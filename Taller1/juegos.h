#pragma once
#include <iostream>
#include "Softwares.h"
class Juego:public Software{
    private:
    string genero;
    int horas_jugadas =0;
    public:
    Juego(string nombre,string developer,int clasificacion,int precio, vector<Usuario> users, string genero);
    ~Juego();
    string getgenre();
    void setgenre(string genero);
    void jugar();
};
Juego::Juego(string nombre,string developer,int clasificacion,int precio, vector<Usuario> users, string genero):Software(nombre,developer,clasificacion,precio,users){
        this ->genero = genero;
}
Juego::~Juego(){

}
string Juego::getgenre(){
    return this ->genero;
}
void Juego::setgenre(string genero){
    this -> genero = genero;
}
void Juego:: jugar(){
    int horas=0;
    cout<<"Ingrese cuantas horas jugara"<<endl;
    cin>>horas;
    this -> horas_jugadas = horas_jugadas +horas;
}