#include "Compteur.h"



int main()
{
    int compt = 0, modul = 6, n = 0, choix, stop;
    
//Pointeurs

    Compt c1(compt,modul) ; //création de l'objet c1 de class Compt
    
    do
    {
    cout<<"Que voullez vous faire ?\n1-Incrementer de 1\n2-Incrementer de N\n3-Voir le compteur\n"<<endl;
    cin>>choix;
    
    switch(choix)
    {
        case 1: c1.incrementer();
        break;
        
        case 2: cout<<"De combien voullez vous incrementer ?\n"<<endl;
                cin>>n;
                c1.incrementerN(n);
        break;
        
        case 3: c1.getEtat();
        break;
    }
    cout<<"Voullez vous continuer ?\n1-Oui\n0-Non\n"<<endl;
    cin>>stop;
    }while(stop != 0);
    return 0;
}
    
Compt::Compt(int compt, int modul)
{
    compteur = compt;
    modulo = modul;
}

void Compt::incrementer()
{
    compteur++;
}
void Compt::incrementerN(int n)
{
    compteur = compteur + n;
}

int Compt::getEtat()
{
    cout<<compteur<<endl;
}




