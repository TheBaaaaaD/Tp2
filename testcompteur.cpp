#include "Compteur.h"

int main ()
{
  int compt = 0, modul = 6, n = 0, choix, stop;

//Pointeurs

  Compt c1 (compt, modul);	//crC)ation de l'objet c1 de class Compt

  do				//on boucle pour pouvoir utiliser le programme plusieur fois
    {
      cout <<
	"Que voullez vous faire ?\n1-Incrementer de 1\n2-Incrementer de N\n3-Voir le compteur"<< endl;
      cin >> choix;		//on donne la valeur de notre choix

      switch (choix)
	{
	case 1:
	  c1.incrementer ();	//appel de la fonction incrementer
	  break;

	case 2:
	  cout << "De combien voullez vous incrementer ?" << endl;
	  cin >> n;
	  c1.incrementerN (n);	//appel de la fonction incrementerN
	  break;

	case 3:
	  cout<<"Le compteur vaut : ";	//appel de la fonction getEtat
	  c1.getEtat();
	  break;
	}
      cout << "Voullez vous continuer ?\n1-Oui\n0-Non" << endl;
      cin >> stop;		//on donne une valeur C  stop
    }
  while (stop != 0);		//tant que stop est different de 0 on continu
  return 0;
}
