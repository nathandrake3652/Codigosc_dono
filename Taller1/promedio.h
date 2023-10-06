#pragma once
#include "Usuarios.h"
#include <iostream>
using namespace std;

class promedio:public Usuario{
    private:
    string correo;
    bool isAdmin = false;
    public:
    promedio(string user, string password, int edad,string correo);
    ~promedio();
    string getcorreo();
    void setcorreo(string correo);
};

promedio:: promedio(string user, string password, int edad, string correo):Usuario(user, password,edad){
    this -> correo =correo;
}
promedio::~promedio(){

}
string promedio::getcorreo(){
    return this->correo;
}
void promedio::setcorreo(string correo){
    this ->correo = correo;
}