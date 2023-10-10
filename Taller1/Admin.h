#pragma once
#include "Usuarios.h"
#include <iostream>
using namespace std;

class Admin : public Usuario{
    private:
    string correo;
    bool isAdmin = true;
    public:
    Admin(string user, string password,int edad ,string correo);
    ~Admin();
    string getcorreo();
    bool getacces();
    void setcorreo(string correo);
};

Admin::Admin(string user, string password,int edad,string correo):Usuario( user, password,edad){ //constructor
    this-> isAdmin =true;
    this->correo = correo;
}
bool Admin::getacces(){ //getter
    return this-> isAdmin;
}
string Admin::getcorreo(){//getter
    return this-> correo;
}
Admin::~Admin(){//destructor

}
void Admin::setcorreo(string correo){//setter
    this->correo =correo;
}