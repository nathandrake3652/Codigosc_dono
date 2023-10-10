# Codigosc_dono
Ejecucion del codigo: g++ main.cpp -o main


Base de Datos:
Usuarios:
 Admin(string"Nathandrake3652",string "29012004",int 19,string "nnathandrrake@gmail.com")
Nino(string "Kevin",string "kevinprogramer112341",int12)
 Nino(string "Gabriel",string "chupetesuazo",int 15)
 Nino(string "Constanza",string "124135",int 16)
 Nino(string "Scarlett",string "12345",int 9)
 promedio(string "Pablo",string "gatoguaton",int 26,string "davemonfruna@gmail.com")
 promedio(string "LeoMax",string "674874",int 44,string "LeoMax@gmail.com")
 promedio(string "Inti",string "dabsol12",int 18,string "Inti241@gmail.com")
 promedio(string "Diego",string "uchigatana",int 21,string "darsouls@gmail.com")
 promedio(string "Finn",string "14451",int 35,string "Finn12341@gmail.com")
 promedio(string "lolero",string "ligoleyen",int 23,string "nose123@gmail.com")
  promedio(string "Mauricio",string "hoyesjueves",int 25,string "nose124@gmail.com")
promedio(string "Benjamin",string "132523",int 23,string "xxbenjaxx@gmail.com")
   promedio(string "Vicente",string "deadgod",int 19,string "tboi12@gmail.com")
 promedio(string "Roberto",string "yanoma",int 22,string "rober1703@gmail.com")
   promedio(string "Alonso",string "12434ng245",int 20,string "katsucki_cl@gmail.com")
   Juegos: 
    Juego(string "CallofDuty",string "ACTIVISION",int 18,int 45000,string "FPS")
   Juego(string "Specopstheline",string "ACTIVISION",int 18,int 50000,string "FPS")
    Juego(string "Dofus",string "panda games",int 5,int 5000,string  "MMO")
    Juego(string "albiononline",string "sandbox",int 15,int 0,string  "MMO")
   Juego(string "TETRIS",string "Nintendo",int 0,int 2000,string  "PUZZLE")
    Juego(string "Fireboy & WaterGirl",string "friv",int 5,int 0, string "PUZZLE")
    Juego(string "Skyrim",string "Bethesda",int 18,int 20000,string  "Mundo Abierto")
    Juego(string "Fallout 4",string "Bethesda",int 18,int 25000,string  "Mundo Abierto")
    Juego(string "ThebindingofIsaac",string "Nicalis.inc",int 13,int 15000,string  "Idie")
    Juego(string "HollowKnight",string "Team cherry",int 13,int 12000, string "indie")
    Juego(string "DarkestDungeon",string "Red hook Studio",18int ,int 15000,string  "Dark Fantasy")
    Juego(string "Darksouls",string "FromSoftware",int 18,int 20000,string  "Dark Fantasy")
   Juego(string "Residentevil2",string "Capcom",int 18,int 5000, string "Survival Horror")
   Juego(string "SilentHill",string "Konami",int 18,int 30000,string  "Survival Horror")
    Juego(string "MetalGearSolid3",string "Konami",int 18int ,15000,string  "sigilo")
    Juego(string "Payday2",string "starbreeze",int 18,int 450,string  "sigilo")
    Juego(string "EntertheGungeon",string "dodge roll",10,3000, string "Roguelike")
   Juego(string "RogueLegacy",string "Cellar Door",int 10,int 5000,string  "Roguelike")
    Juego(string "thewitcher3",string "CD PROJEKT",int 18,int 30000,string  "Accion")
   Juego(string "skultheheroslayer",string "Southpaw games",int 12,int 5000,string  "Accion")

   Ofimatica:
   Ofimatica(string "Word",string  "Microsoft",int 18,int 5000,int 5)
   Ofimatica(string "PowerPoint",string  "Microsoft",int 18,int 5000,int 3)
   Ofimatica(string "Canva", string "gsga",1int 8,int 5000,int 2)
  Ofimatica(string "Googledrive",string "google",int 18,int 0,int 8)
   Ofimatica(string "Dropbox",string  "Microsoft",int 18,int 5000,int 1)

Produccion:
Produccion(string "Twitch",string  "yo",int 18,int 0,string "streaming")
Produccion(string "youtube", string "Google",int 18,int 0,string "video")
Produccion(string "Spotify", string "idk",int 18,int 0,string "musica")
 Produccion(string "Photoshop", string "gadgfa",int 18,int 0,string "fotos")

 Navegador:
 navegador(string "Operagx",string "Opera Software",int 5,int 0, queue <string>a)
   new navegador(string "Google",string "Google ",int 5,int 0, queue <string>b)

   Seguridad:
    Seguridad(string "Avast",string "FLDSMFR",int 12,int 15000,string "Ransomware")
     Seguridad(string "MCffe",string "Microsoft",int 12,int 20000,string "Spyware")
    Seguridad(string "Defender",string "Microsoft",int 12,int 15000,string "botnets")
   Seguridad(string "Cybernet",string "Kaze",int 12,int 10000,string "rootkits")
     Seguridad(string "Security",string "EA",int 12,int 15000,string "gusanos")
    Seguridad(string "Gold",string "Coffe",int 8,int 11000,string "troyanos")



FUNCIONES

navegador:
navegador(string nombre,string developer,int clasificacion,int precio, queue<string> historial); //contructor
    ~navegador(); // destructor
    bool buscar(string busqueda);  //"visita" una pagina web y llama a la funcion historyadd
    void history();//muestra el historial de navegacion
    bool historyadd(string xd); //añade las busquedas al historial

nino:

Nino(string user, string password, int edad ); //constructor con herencia
    ~Nino();//destructor
    void setedad(int edad) override;// setter
    int comprobador(int edad) override; //comprueba que la edad del niño sea menor a 18


Ofimatica: 
Ofimatica(string nombre,string developer,int clasificacion,int precio, int archivos);// constructor con herencia
    ~Ofimatica(); // destructor
    int getarch(); //getter
    void crear(); // crea un archivo
    void eliminar(); // elimina un archivo

Produccion:

Produccion(string nombre,string developer,int clasificacion,int precio, string servicio);// constructor con herencia
    ~Produccion(); // destructor
    string getserv(); // getter
    void setserv(string servicio); //setter
    void utilizar(); // "utiliza el servicio"


Promedio:
 promedio(string user, string password, int edad,string correo); // constructor
    ~promedio(); // destructor
    string getcorreo(); //getter
    void setcorreo(string correo); //setter


Seguridad: 
Seguridad(string nombre,string developer,int clasificacion,int precio,string maltype); //constructor con herencia
    ~Seguridad(); //destructor
    string gettype();//getter
    int getbaul();//getter
    bool comprobar(string maltype);// comprueba que se asigne un maltype correcto a la hora de la creacion del objeto
    void asegurar(string tvirus); // "envia un virus al baul"
    bool compuser(Usuario* a) override; // compreuba que el usuario pueda utilizar el software


Software:
Software(string nombre,string developer,int clasificacion,int precio); //constructor
    ~Software();//destructor
    string getnombre(); //getter
    void setnombre(string nombre); //setter
    string getdevelop();//getter
    void setdevelop(string developer); //setter
    int getclasi();//getter
    int getprec();//getter
    void setclasi(int clasificacion);//setter
    virtual vector<Usuario*>& getusers();//getter
    virtual bool adduser(Usuario* a); //añade un usuario al vector usuarios que pueden utilizar este software
    //bool popuser(Usuario a); // funcion descartada
    virtual bool compuser(Usuario* a); // comprueba que el usuario pueda utilizar este software
    virtual bool relluser(vector<Usuario*> a); // recorre un vector de Usuarios y añade los que cumplan las condiciones para utilizar el software al vector de usuarios
    bool recusers(Usuario* a); //compara 2 usuarios

Usuarios:
 Usuario(string user,string  password,int edad);//constructor
     ~Usuario();// destructor
    string getuser();//getter
    string getpass();//getter
    int getedad();//getter
    virtual void setedad(int edad);//setter
    void setuser(string nuser);//setter
    void setpass(string npass);//setter
    virtual int comprobador(int edad);// funcion descartada
    void dispsoft(vector<Software*>& biblio ); // rellena el vector de softwares disponibles para este usuario
    void addsoft(); // añade un software a la biblioteca del usuario
    void eliminarsoft();// elimina un software de la biblioteca del usuario
    void imprimirsoft(vector<Software*> s); // imprime los archivos de un vector de softwares
    void versoft(); // muestra la biblioteca del usuario y permite interactuar con ella
    void utilizar(Software* programa); // utiliza un software utilizando polimorfismo para utilizar las funciones de los hijos



    