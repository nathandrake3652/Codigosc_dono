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
navegador::navegador(string nombre,string developer,int clasificacion,int precio, queue<string> historial):Software(nombre,developer,clasificacion,precio){//constructor con herencia
    this ->historial=historial;
}
navegador::~navegador(){//destructor

}
bool navegador:: historyadd(string xd){//añade las busquedas al historial
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

void navegador::history(){ //muestra el historial de navegacion
    queue<string> copia= historial;
    while (!copia.empty())
    {
        cout<<copia.front()<<endl;
        copia.pop();
    }
    
}
bool navegador::buscar(string xd){ //"visita" una pagina web y llama a la funcion historyadd
    cout<<"visitaste la pagina"<<xd<<endl;
    historyadd(xd);
    return true;
}