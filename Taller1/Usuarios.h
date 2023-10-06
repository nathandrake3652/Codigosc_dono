
#pragma once
#include <iostream>
using namespace std;


class Usuario 
{
    private:
    string user;
    string password;
    protected:
    int edad;
    
    public:
    Usuario(string user,string  password,int edad);
     ~Usuario();
    string getuser();
    string getpass();
    int getedad();
    virtual void setedad(int edad);
    void setuser(string nuser);
    void setpass(string npass);
    virtual int comprobador(int edad);
    
};

Usuario::Usuario(string user, string password, int edad){
    this ->user = user;
    this ->password = password;
    this ->edad =edad;
    
};

string Usuario ::getuser(){
    return this ->user;
};
string Usuario ::getpass(){
    return this ->password;
};
Usuario::~Usuario(){};

void Usuario::setuser(string nuser){
    this-> user =nuser;
}
void Usuario::setpass(string npass){
    this ->password =npass;
}

int Usuario::getedad(){
    return this ->edad;
}
void Usuario::setedad(int edad){
    this-> edad= edad;
}
int Usuario::comprobador(int edad){
return edad;
}