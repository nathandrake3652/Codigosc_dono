#pragma once
#include <iostream>
#include "Softwares.h"
#include <queue>

class navegador:public Software{
    private:
    queue<string> historial;
    public:
    navegador(string nombre,string developer,int clasificacion,int precio, queue<string> historial);
    ~navegador();
    bool buscar(string busqueda);
    void history();
    bool historyadd(string xd);
};
navegador::navegador(string nombre,string developer,int clasificacion,int precio, queue<string> historial):Software(nombre,developer,clasificacion,precio){
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
        return true;

    }
    return false;
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
    cout<<"visitaste la pagina"<<xd<<endl;
    historyadd(xd);
    return true;
}