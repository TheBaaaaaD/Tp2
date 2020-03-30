#include "Compteur.h"

Compt::Compt (int compt, int modul)	//fonction de création du constructeur
{
  compteur = compt;		//on donne les valeurs C  compteur et modul
  modulo = modul;
}

void Compt::incrementer ()		//fonction pour ajouter 1 au compteur
{
  compteur = (compteur + 1) % modulo; 
  cout<<"On a incrementer de 1"<<endl;
}

void Compt::incrementerN (int *n)	//fonction pour incrementer de N
{
  compteur = (compteur + *n) % modulo;
  cout<<"On a incrementer de "<<*n<<endl;
}

void Compt::getEtat ()		//fonction pour obtenir la valeur du compteur
{
  cout << compteur << endl;
}
