#pragma once
#include <iostream>
#include "Usuarios.h"
#include <vector>
class Software
{
    private:
    string nombre;
    string developer;
    int clasificacion;
    int precio;
    protected:
    vector<Usuario> users;
    public:
    Software(string nombre,string developer,int clasificacion,int precio, vector<Usuario>users);
    ~Software();
    string getnombre();
    void setnombre(string nombre);
    string getdevelop();
    void setdevelop(string developer);
    int getclasi();
    void setclasi(int clasificacion);
    vector<Usuario> getusers();
    bool adduser(Usuario a);
    //bool popuser(Usuario a);
    
};
Software::Software(string nombre,string developer,int clasificacion,int precio, vector<Usuario> users){
    this ->nombre =nombre;
    this -> developer = developer;
    this -> clasificacion =clasificacion;
    this -> precio = precio;
    this -> users = users;
}
Software::~Software(){

}
string Software::getnombre(){
    return this-> nombre;
}
void Software::setnombre(string nombre){
    this->nombre = nombre;
}
string Software::getdevelop(){
    return this->developer;
}
void Software::setdevelop(string developer){
    this -> developer= developer;
}
int Software::getclasi(){
    return this -> clasificacion;
}
void Software::setclasi(int clasificacion){
    this-> clasificacion=clasificacion;
}
vector<Usuario> Software::getusers(){
    return this-> users;
} 
bool Software ::adduser(Usuario a){
    users.push_back(a);
    return true;
}
/*bool Software::popuser(Usuario a){
    
}*/
