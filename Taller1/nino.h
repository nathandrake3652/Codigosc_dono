#pragma once
#include "Usuarios.h"
#include <iostream>
using namespace std;

class Nino: public Usuario{
    private:
    bool isnino= true;
    public:
    Nino(string user, string password, int edad );
    ~Nino();
    void setedad(int edad) override;
    int comprobador(int edad);
  
};

int Nino::comprobador(int edad){
   while(edad>=18){
        cout<<"esta edad sobrepasa el limite de esta categoria, ingrese una nueva edad"<<endl;
        cin>>edad;
    };
    return edad;

};

Nino::Nino(string user, string password,int edad): Usuario(user,password,edad){
    this ->isnino = true;
}

void Nino::setedad(int edad){
    comprobador(edad);
    this ->edad =edad;
}
