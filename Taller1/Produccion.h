#pragma once
#include <iostream>
#include "Softwares.h"

class Produccion: public Software{
    private:
    string servicio;
    public:
    Produccion(string nombre,string developer,int clasificacion,int precio, string servicio);
    ~Produccion();
    string getserv();
    void setserv();
    void utilizar();
};
Produccion:: Produccion(string nombre,string developer,int clasificacion,int precio, string servicio):Software(nombre,developer,clasificacion,precio){
    this-> servicio= servicio;
}
Produccion::~Produccion(){

}
string Produccion:: getserv(){
    return this -> servicio;
}
void Produccion::setserv(){
    this->servicio =servicio;
}
void Produccion:: utilizar(){
    cout<<"has utilizado este servicio de "<<servicio<<endl;
}
    
