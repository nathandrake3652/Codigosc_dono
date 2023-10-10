#pragma once
#include <iostream>
#include "Usuarios.h"
#include <vector>
class Usuario;
class Software
{
    private:
    string nombre;
    string developer;
    int clasificacion;
    int precio;
    protected:
    vector<Usuario*> users;
    public:
    Software(string nombre,string developer,int clasificacion,int precio);
    ~Software();
    string getnombre();
    void setnombre(string nombre);
    string getdevelop();
    void setdevelop(string developer);
    int getclasi();
    int getprec();
    void setclasi(int clasificacion);
    virtual vector<Usuario*>& getusers();
    virtual bool adduser(Usuario* a);
    //bool popuser(Usuario a);
    virtual bool compuser(Usuario* a);
    virtual bool relluser(vector<Usuario*> a);
    bool recusers(Usuario* a);
    
};
Software::Software(string nombre,string developer,int clasificacion,int precio){//constructor
    this ->nombre =nombre;
    this -> developer = developer;
    this -> clasificacion =clasificacion;
    this -> precio = precio;
    
}
Software::~Software(){//destructor

}
string Software::getnombre(){ //getter
    return this-> nombre;
}
void Software::setnombre(string nombre){//setter
    this->nombre = nombre;
}
string Software::getdevelop(){ //getter
    return this->developer;
}
void Software::setdevelop(string developer){ //setter
    this -> developer= developer;
}
int Software::getclasi(){ //getter
    return this -> clasificacion;
}
void Software::setclasi(int clasificacion){ //setter
    this-> clasificacion=clasificacion;
}
vector<Usuario*>& Software::getusers(){ //getter
    return this-> users;
} 
bool Software ::adduser(Usuario* a){ //añade un usuario a la lista de usuarios que pueden utilizar este programa
    users.push_back(a);
    return true;
}
/*bool Software::popuser(Usuario a){ funcion descartada
    
}*/
bool Software::compuser(Usuario* a){ //comprueba que el usuario pueda utilizar este software
    if(a->getedad() >= clasificacion){
        adduser(a);
        return true;
    }
    return false;
}
bool Software::relluser(vector<Usuario*> a){ // recorre un vector de usuarios para saber que usuario puede utilizar este software
    for(Usuario* user: a ){
        compuser(user);
    }
    return true;
}

 bool Software::recusers(Usuario *a) //funcion que compara 2 usuarios
{
    for(Usuario* b: users){
        if( b->getuser()== a->getuser()){
            return true;
        }
    }
    return false;
}
 int Software::getprec(){ //getter
    return this-> precio;
 }
