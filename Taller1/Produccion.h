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
    void setserv(string servicio);
    void utilizar();
};
Produccion:: Produccion(string nombre,string developer,int clasificacion,int precio, string servicio):Software(nombre,developer,clasificacion,precio){//constructor con herencia
    this-> servicio= servicio;
}
Produccion::~Produccion(){//destructor

}
string Produccion:: getserv(){//getter
    return this -> servicio;
}
void Produccion::setserv(string servicio){//setter
    this->servicio = servicio;
}
void Produccion:: utilizar(){ //"utiliza" un servicio
    cout<<"has utilizado este servicio de "<<servicio<<endl;
}
    
