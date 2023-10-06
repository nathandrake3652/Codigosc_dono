#include <iostream>
#include <vector>
#include "Usuarios.h"
#include "Admin.h"
#include "promedio.h"
#include "nino.h"
#include "Softwares.h"
#include "juegos.h"
using namespace std;
int main()
{
   Nino* a = new Nino("nathandrake","allahuakbar123",15);
   vector<Usuario> base;
   cout<< a->getedad()<<" "<<a->getpass()<<" "<<a->getuser()<<endl;
   a->setedad(19);
   Juego* b = new Juego("Darkest Dungeon","Red Hook Studio", 16,20000,base,"Roguelike");
   cout<<b->getgenre()<<endl;
   b->jugar();
cout<<b->horas()<<endl;


    

};