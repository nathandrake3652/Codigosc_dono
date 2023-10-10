#pragma once
#include <iostream>
#include "Usuarios.h"
#include "Softwares.h"
#include "juegos.h"
#include "Ofimatica.h"
#include "Seguridad.h"
#include "Produccion.h"
#include "navegador.h"


Usuario::Usuario(string user, string password, int edad){// constructor con herencia
    this ->user = user;
    this ->password = password;
    this ->edad =edad;
    
};

string Usuario ::getuser(){//getter
    return this ->user;
};
string Usuario ::getpass(){//getter
    return this ->password;
};
Usuario::~Usuario(){};//destructor

void Usuario::setuser(string nuser){ //setter
    this-> user =nuser;
}
void Usuario::setpass(string npass){//setter
    this ->password =npass;
}

int Usuario::getedad(){ //getter
    return this ->edad;
}
void Usuario::setedad(int edad){ //setter
    this-> edad= edad;
}
int Usuario::comprobador(int edad){ // funcion descartada
return edad;
}
void Usuario::dispsoft(vector<Software*>& biblio) { //asigna los softwares que el usuario puede añadir a su biblioteca
    for (Software* soft : biblio) {
        vector<Usuario*> disps = soft->getusers();
        for (Usuario* dispo : disps) {
            if (dispo->getuser() == user) {
                
                bool encontrado = false;
                for (Software* disponible : disponibles) {
                    if (disponible->getnombre() == soft->getnombre()) {
                        encontrado = true;
                        break;
                    }
                }

                
                if (!encontrado) {
                    disponibles.push_back(soft);
                }
            }
        }
    }
}

void Usuario::imprimirsoft(vector<Software*> s){ //imprime por pantalla los softwares que el usuario puede añadir a su biblioteca
    
    for(int i=0; i<s.size();i++){
        cout<<i<<". "<< s[i]->getnombre()<<" "<<s[i]->getprec()<<endl;

    }

}
void Usuario::addsoft() { //añade softwares a la bibliteca del usuario
    string eleccion;
    
    if (disponibles.empty()) {
        cout << "No hay software disponible para instalar." << endl;
        return;
    }

    imprimirsoft(disponibles);
    cout << "Ingrese el nombre del software que desea conseguir: ";
    cin >> eleccion;

    for (int i = 0; i < disponibles.size(); i++) {
        if (disponibles[i]->getnombre() == eleccion) {
            soft.push_back(disponibles[i]);
            cout << "Producto instalado con éxito" << endl;
            return;
        }
    }

    cout << "El software seleccionado no puede ser instalado o no existe" << endl;
}
void Usuario::eliminarsoft(){ //elimina un software de la biblioteca de un usuario
    string eleccion;
    imprimirsoft(soft);
    cout<<"aviso el software eleminado sera solo eliminado de tu biblioteca otros usuarios aun pueden acceder a el";
    cout<<"ingrese el nombre del software que desea eliminar";
    cin>>eleccion;
    for(int i=0; i<soft.size();i++){
        if(soft.empty()){
            cout<<"no hay Softwares que elimianr"<<endl;
            return;
        }
        if (soft[i]->getnombre()==eleccion)
        {
        
            soft.erase(soft.begin()+(i));
            cout<<"producto eliminado con exito con exito"<<endl;
            return;
        }
        
     }
     cout<<"el software seleccionado no puede ser eliminado";
     return;

    
}

void Usuario:: utilizar(Software* programa){ //utiliza las funciones de cada software
   if (Juego* gameptr = dynamic_cast<Juego*>(programa)) {
       
        gameptr->jugar();
    } else if (Ofimatica* ofimaticaptr = dynamic_cast<Ofimatica*>(programa)) {
        
        ofimaticaptr->crear();
    } else if (Produccion* produccionptr = dynamic_cast<Produccion*>(programa)) {
        
        produccionptr->utilizar();
    } else if (Seguridad* seguridadptr = dynamic_cast<Seguridad*>(programa)) {
        string virus;
        cout<<"que tipo de virus quiere asegurar";
        cin>> virus;
        seguridadptr->asegurar(virus);
    } else if (navegador* navprt = dynamic_cast<navegador*>(programa))
    {
        int selec;
        string selec2;
        cout<<"1. buscar algo"<<endl<<"2.ver el historial"<<endl;
        cin>>selec;
        if(selec==1){
            cout<<"introduzca la pagina que desea visitar"<<endl;
            cin>>selec2;
            navprt->buscar(selec2);
        }
        if (selec==2){
            navprt->history();
        }
        
    }
    else
    {
        
        cout << "No se pudo determinar el tipo de software." << endl;
    }

}

void Usuario::versoft(){ //muestra los softwares en la biblioteca del usuario y permite interactuar con ellos
    string eleccion;
    Software* programa;
    if(soft.empty()){
        cout<< "aun no has instalado ningun software";
        return;
    }
    imprimirsoft(soft);
    cout<<"introduzca el nombre del software que desea utilizar"<<endl;
    cin>> eleccion;
    for(Software* pro : soft){
            if(pro->getnombre()== eleccion){
                programa = pro;
            }
    }
    utilizar(programa);
}