#include <iostream>
#include <vector>
#include <queue>
#include "Usuarios.h"
#include "Admin.h"
#include "promedio.h"
#include "nino.h"
#include "Softwares.h"
#include "juegos.h"
#include "Ofimatica.h"
#include "Seguridad.h"
#include "navegador.h"
#include "Produccion.h"
using namespace std;

Usuario* login(vector<Usuario*> users) { // funcion que recorre el vector de usuarios y comprueba credenciales
    string name;
    string pass;
    cout << "Ingrese su nombre de Usuario" << endl;
    cin >> name;
    cout << "Ingrese su contraseña" << endl;
    cin >> pass;

    for (Usuario* user : users) {
        if (user->getuser() == name && user->getpass() == pass) {
            cout << "Inicio de sesion completado" << endl;
            return user;
        } else if (user->getuser() == name) {
            cout << "Contraseña incorrecta. Intentelo nuevamente." << endl;
            return nullptr;
        }
    }

    cout << "Nombre de usuario no encontrado." << endl;
    return nullptr;
}
void menu(vector<Usuario*> users, vector<Software*> soft) { // funcion que utiliza un switch para presentar el menu
    
    int opcion = 0;
    cout<<"Bienvenido"; 
    Usuario* op = nullptr;
    while (opcion != 2) {
      cout << endl << "1. Iniciar sesion" << endl << "2. Salir"<<endl;
      cin >> opcion;
        switch (opcion) {
            case 1:
                op = login(users);
                if(op !=  nullptr){
                  cout<<"funciona";
                }
               
                
                
                break; 

            case 2:
                cout << "Apagando computadora";
                break; 

            default:
                cout << "Opcion incorrecta, por favor intentelo nuevamente" << endl;
                cout << "Bienvenido" << endl << "1. Iniciar sesion" << endl << "2. Salir";
                
                break; 
        }
        
    }
}
void crearusuarios(vector<Usuario*>& users){ //funcion que rellena la base de datos de usuarios
   
   users.push_back(new Admin("Nathandrake3652","29012004",19,"nnathandrrake@gmail.com"));
   users.push_back(new Nino("Kevin","kevinprogramer112341",12));
   users.push_back(new Nino("Gabriel","chupetesuazo",15));
   users.push_back(new Nino("Constanza","124135",16));
   users.push_back(new Nino("Scarlett","12345",9));
   users.push_back(new promedio("Pablo","gatoguaton",26,"davemonfruna@gmail.com"));
   users.push_back(new promedio("LeoMax","674874",44,"LeoMax@gmail.com"));
   users.push_back(new promedio("Inti","dabsol12",18,"Inti241@gmail.com"));
   users.push_back(new promedio("Diego","uchigatana",21,"darsouls@gmail.com"));
   users.push_back(new promedio("Finn","14451",35,"Finn12341@gmail.com"));
   users.push_back(new promedio("lolero","ligoleyen",23,"nose123@gmail.com"));
   users.push_back(new promedio("Mauricio","hoyesjueves",25,"nose124@gmail.com"));
   users.push_back(new promedio("Benjamin","132523",23,"xxbenjaxx@gmail.com"));
   users.push_back(new promedio("Vicente","deadgod",19,"tboi12@gmail.com"));
   users.push_back(new promedio("Roberto","yanoma",22,"rober1703@gmail.com"));
   users.push_back(new promedio("Alonso","12434ng245",20,"katsucki_cl@gmail.com"));
};
void crearjuegos(vector<Software*>& soft){ //funcion que crea juegos y los anade a la biblioteca
   soft.push_back(new Juego("Call of Duty","ACTIVISION",18,45000, "FPS"));
   soft.push_back(new Juego("Call of Duty: Black Ops","ACTIVISION",18,50000, "FPS"));
   soft.push_back(new Juego("Dofus","panda games",5,5000, "MMO"));
   soft.push_back(new Juego("albion online","sandbox",15,0, "MMO"));
   soft.push_back(new Juego("TETRIS","Nintendo",0,2000, "PUZZLE"));
   soft.push_back(new Juego("Fireboy & WaterGirl","friv",5,0, "PUZZLE"));
   soft.push_back(new Juego("Skyrim","Bethesda",18,20000, "Mundo Abierto"));
   soft.push_back(new Juego("Fallout 4","Bethesda",18,25000, "Mundo Abierto"));
   soft.push_back(new Juego("The binding of Isaac","Nicalis.inc",13,15000, "Idie"));
   soft.push_back(new Juego("Hollow Knight","Team cherry",13,12000, "indie"));
   soft.push_back(new Juego("Darkest Dungeon","Red hook Studio",18,15000, "Dark Fantasy"));
   soft.push_back(new Juego("Dark souls","FromSoftware",18,20000, "Dark Fantasy"));
   soft.push_back(new Juego("Resident evil 2","Capcom",18,5000, "Survival Horror"));
   soft.push_back(new Juego("Silent Hill","Konami",18,30000, "Survival Horror"));
   soft.push_back(new Juego("Metal Gear Solid 3","Konami",18,15000, "sigilo"));
   soft.push_back(new Juego("Payday2","starbreeze",18,450, "sigilo"));
   soft.push_back(new Juego("Enter the Gungeon","dodge roll",10,3000, "Roguelike"));
   soft.push_back(new Juego("Rogue Legacy","Cellar Door",10,5000, "Roguelike"));
   soft.push_back(new Juego("the witcher 3","CD PROJEKT",18,30000, "Accion"));
   soft.push_back(new Juego("skul the hero slayer","Southpaw games",12,5000, "Accion"));

}
void crearoffice(vector<Software*>& soft){ // funcion que crea los software de ofimatica y los añade a biblioteca
   soft.push_back(new Ofimatica("Word", "Microsoft",18,5000,5));
   soft.push_back(new Ofimatica("PowerPoint", "Microsoft",18,5000,3));
   soft.push_back(new Ofimatica("Canva", "gsga",18,5000,2));
   soft.push_back(new Ofimatica("Google drive", "google",18,0,8));
   soft.push_back(new Ofimatica("Dropbox", "Microsoft",18,5000,1));
}
void crearprod(vector<Software*>& soft) { // funcion que crea los software de produccion y los añade a biblioteca
   soft.push_back(new Produccion("Twitch", "yo",18,0,"streaming"));
   soft.push_back(new Produccion("youtube", "Google",18,0,"video"));
   soft.push_back(new Produccion("Spotify", "idk",18,0,"musica"));
   soft.push_back(new Produccion("Photoshop", "gadgfa",18,0,"fotos"));
}

void crearnav(vector<Software*>& soft,queue<string> a,queue<string> b){// funcion que crea los software de produccion y los añade a biblioteca
   soft.push_back(new navegador("Opera gx","Opera Software",5,0, a));
   soft.push_back(new navegador("Opera gx","Opera Software",5,0, b));

}
void crearseg(vector<Software*>& soft){
    soft.push_back(new Seguridad("Avast","FLDSMFR",12,15000,"Ransomware"));
    soft.push_back(new Seguridad("MCffe","Microsoft",12,20000,"Spyware"));
    soft.push_back(new Seguridad("Defender","Microsoft",12,15000,"botnets"));
    soft.push_back(new Seguridad("Cybernet","Kaze",12,10000,"rootkits"));
    soft.push_back(new Seguridad("Security","EA",12,15000,"gusanos"));
    soft.push_back(new Seguridad("Gold","Coffe",8,11000,"troyanos"));
}
 void rellenar(vector<Software*>& soft, vector<Usuario*>& users,queue<string> a,queue<string> b){
         crearusuarios(users);
         crearjuegos(soft);
         crearnav(soft ,a ,b);
         crearoffice(soft);
         crearprod(soft);
         crearseg(soft);
 }
int main()
{
   vector<Usuario*> usuarios;
   vector<Software*> biblioteca;
   queue<string> a;
   queue<string> b;
   rellenar(biblioteca,usuarios,a,b);

   menu(usuarios, biblioteca);
    

};