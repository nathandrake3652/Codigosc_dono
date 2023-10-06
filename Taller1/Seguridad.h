#pragma once
#include "Softwares.h"
#include <iostream>

class Seguridad:public Software{
    private:
    string maltype;
    int baul;
    public:
    Seguridad(string nombre,string developer,int clasificacion,int precio, vector<Usuario>users,string maltype);
    ~Seguridad();
    string gettype();
    int getbaul();
    bool comprobar(string maltype);
    void asegurar(string tvirus);
};

bool Seguridad:: comprobar(string maltype){
   if(maltype =="Ransomware"|| maltype=="Spyware"|| maltype =="botnets"|| maltype =="rootkits"||maltype =="gusanos"||maltype == "troyanos"){
    return true;
   }
   cout<< "tipo de malware no disponible ingrese otro"<<endl;
   cin>> maltype;
   comprobar(maltype);
}

Seguridad::Seguridad(string nombre,string developer,int clasificacion,int precio, vector<Usuario>users,string maltype):Software(nombre,developer,clasificacion,precio,users){
    bool si = comprobar(maltype);
    if(si){
        this ->maltype =maltype;
    }
}
Seguridad::~Seguridad(){

}
string Seguridad::gettype(){
    return this ->maltype;
}
int Seguridad::getbaul(){
    return this ->baul;
}
void Seguridad::asegurar(string tvirus){
    if(tvirus==maltype){
        baul++;
        cout<< "virus asegurado con exito"<<endl;

    }
    else{
        cout<<"este virus no puede ser asegurado con este antivirus"<<endl;
    }

}