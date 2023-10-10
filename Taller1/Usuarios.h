
#pragma once
#include <iostream>

using namespace std;


class Software;
class Usuario 
{
    private:
    string user;
    string password;
    protected:
    int edad;
    vector<Software*> soft;
    vector<Software*> disponibles;
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
    void dispsoft(vector<Software*>& biblio );
    void addsoft();
    void eliminarsoft();
    void imprimirsoft(vector<Software*> s);
    void versoft();
    void utilizar(Software* programa);
    
};

