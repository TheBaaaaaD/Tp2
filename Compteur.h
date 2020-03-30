#ifndef DEF_Compteur // Si la constante n'a pas été définie le fichier n'a jamais été inclus
#define DEF_Compteur // On définit la constante pour que la prochaine fois le fichier ne soit plus inclus


    #include <iostream>
    #include <fstream>
    #include <string>
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    
    
using namespace std;
  
//Classes

class Compt{
    private :
        int compteur;
        int modulo;
    public :
        Compt(int,int);
        void incrementer(); 
        void incrementerN(int *);
        void getEtat();
    
};
  
  
    
//Prototypes

//Fonctions


#endif
