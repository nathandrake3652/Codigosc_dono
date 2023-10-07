#include <iostream>
#include <vector>
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
void crearusuarios(vector<Usuario*> users){ //funcion que rellena la base de datos de usuarios
   
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
   users.push_back(new promedio("Alonos","12434ng245",20,"katsucki_cl@gmail.com"));
};
void crearjuegos(vector<Software*> soft){ //funcion que crea juegos y los anade a la biblioteca
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
void crearoffice(vector<Software*> soft){
   soft.push_back(new Ofimatica("Word", "Microsoft",18,5000,5));
   soft.push_back(new Ofimatica("PowerPoint", "Microsoft",18,5000,3));
   soft.push_back(new Ofimatica("Canva", "gsga",18,5000,2));
   soft.push_back(new Ofimatica("Google drive", "google",18,0,8));
   soft.push_back(new Ofimatica("Dropbox", "Microsoft",18,5000,1));
}
void crearprod(vector<Software*> soft) {
   soft.push_back(new Produccion("Twitch", "yo",8,0,"streaming"));
   soft.push_back(new Produccion("youtube", "Google",5,0,"video"));
   soft.push_back(new Produccion("Spotify", "idk",8,0,"musica"));
   soft.push_back(new Produccion("Photoshop", "gadgfa",8,0,"fotos"));
}

void crearnav(vector<Software*> soft){

}

int main()
{
   vector<Usuario*> usuarios;
   vector<Software*> biblioteca;

    

};