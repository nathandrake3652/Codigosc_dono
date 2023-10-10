#pragma once
#include "Softwares.h"
#include <iostream>
#include "Admin.h"

class Seguridad:public Software{
    private:
    string maltype;
    int baul;
    public:
    Seguridad(string nombre,string developer,int clasificacion,int precio,string maltype);
    ~Seguridad();
    string gettype();
    int getbaul();
    bool comprobar(string maltype);
    void asegurar(string tvirus);
    bool compuser(Usuario* a) override;
    
};

bool Seguridad:: comprobar(string maltype){//funcion recursiva que comprueba la correcta asignacion del atributo maltype
   if(maltype =="Ransomware"|| maltype=="Spyware"|| maltype =="botnets"|| maltype =="rootkits"||maltype =="gusanos"||maltype == "troyanos"){
    return true;
   }
   cout<< "tipo de malware no disponible ingrese otro"<<endl;
   cin>> maltype;
    return comprobar(maltype);

}

Seguridad::Seguridad(string nombre,string developer,int clasificacion,int precio, string maltype):Software(nombre,developer,clasificacion,precio){//constructor con herencia
    bool si = comprobar(maltype);
    if(si){
        this ->maltype =maltype;
    }
}
Seguridad::~Seguridad(){//destructor

}
string Seguridad::gettype(){//getter
    return this ->maltype;
}
int Seguridad::getbaul(){//getter
    return this ->baul;
}
void Seguridad::asegurar(string tvirus){//"envia un virus al baul"
    if(tvirus==maltype){
        baul++;
        cout<< "virus asegurado con exito"<<endl;

    }
    else{
        cout<<"este virus no puede ser asegurado con este antivirus"<<endl;
    }

}
 
bool Seguridad::compuser(Usuario* a) //comprueba que el usuario pueda usar este software
{
    int edad = a ->getedad();
     Admin* adminPtr = dynamic_cast< Admin*>(a);
        if (adminPtr) {
            if(adminPtr->getacces()) {
                adduser(a);
                return true;
            }
}
return false;
}

