#include <stdio.h>
#include <stdlib.h>
#include <time.h>//utile pour la creation d'un nombre aleatoire

int main(int argc, char *argv[])

{
system("clear");
    file* fichier = null;

    int caractereactuel = 0;
    int nbrAlea;
    int linecounter = 0;

 
	srand (time (NULL));//créer nbr alea entre 1 et 5 pour choisir entre les differentes images
	nbrAlea = Random (1,5);
	printf ("Random : %d", nbrAlea);
	fichier = fopen("image2", "r");

 

    if (fichier != null)

    {

        // boucle de lecture des caractres un  un

        do
		

        {

            caractereactuel = fgetc(fichier); // on lit le caractre

           // printf("%c", caractereactuel); // on l'affiche
	
	//printf("%d",compt); 

		switch(caractereactuel)
	{
	case 49: //1
		printf("%c",987);

	break;
	case 48: //0
		printf("%c",240);
	break;
	case '\t': //tab
		//printf("er");
	break;
	//case 
	default:
		printf("\n");
		linecounter++;
	break;
	}

	


        } while (linecounter < 30 ); // on continue tant que compteurglobal n'a pas finis le fichier

 

        fclose(fichier);

    }

 
while(1);//attente pour eviter de montrer le prompt 

    return 0;

}
	/*fonction qui permet de creer le random en fonction des resultats precedents*/
	int random (int _imin, int _imax)
	{
	return (_imin + (rand () % (_imax-_imin+1)));
	}
