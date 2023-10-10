#pragma once
#include <iostream>
#include "Softwares.h"

class Ofimatica:public Software{
    private:
    int archivos;
    public:
    Ofimatica(string nombre,string developer,int clasificacion,int precio, int archivos);
    ~Ofimatica();
    int getarch();
    void crear();
    void eliminar();
};
Ofimatica::Ofimatica(string nombre,string developer,int clasificacion,int precio, int archivos):Software(nombre,developer,clasificacion,precio){//constructor con herencia
    this ->archivos=archivos;
}
Ofimatica::~Ofimatica(){//destructor

}
int Ofimatica::getarch(){//getter
    return this ->archivos; 
}
void Ofimatica::crear(){//"crea" un archivo
    int cant =0;
    cout<<"cuantos archivos va a crear"<<endl;
    cin>> cant;
    archivos = archivos +cant;

}