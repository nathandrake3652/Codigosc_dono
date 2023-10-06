#pragma once
#include <iostream>
#include "Softwares.h"
#include <queue>

class navegador:public Software{
    private:
    string navname;
    queue<string> historial;
    public:
    navegador(string nombre,string developer,int clasificacion,int precio, vector<Usuario>users, string navname,queue<string> historial);
    ~navegador();
    string getnav();
    void setnav(string navname);
    bool buscar(string busqueda);
    void history();
    bool historyadd(string xd);
};
navegador::navegador(string nombre,string developer,int clasificacion,int precio, vector<Usuario>users, string navname,queue<string> historial):Software(nombre,developer,clasificacion,precio,users){
    this ->navname =navname;
    this ->historial=historial;
}
navegador::~navegador(){

}
bool navegador:: historyadd(string xd){
    if(historial.empty()){
        historial.push(xd);
        return true;
    }
    if(historial.size()<=10){
        historial.pop();
        historial.push(xd);
        return true;
    }
    else{
        historial.push(xd);

    }
    
}
string navegador::getnav(){
    return this ->navname;
}
void navegador::setnav(string navname){
    this ->navname =navname;
}
void navegador::history(){
    queue<string> copia= historial;
    while (!copia.empty())
    {
        cout<<copia.front()<<endl;
        copia.pop();
    }
    

    
}
bool navegador::buscar(string xd){
    cout<<"buscaste informacion en"<<xd<<endl;
    historyadd(xd);
}