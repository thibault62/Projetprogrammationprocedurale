#include <stdio.h>
#include <stdlib.h>
#include <time.h>//utile pour la creation d'un nombre aleatoire

/*fonction qui permet de creer le random en fonction des resultats precedents*/
	int Random (int _imin, int _imax)
	{
	return (_imin + (rand () % (_imax-_imin+1)));
	}

int main(int argc, char *argv[])

{
system("clear");
    FILE* fichier = NULL;

    int caractereactuel = 0;//creation de notre caractere actuel
    int nbrAlea;//nombre aleatoire
    int linecounter = 0;//compteur de ligne

 
	srand (time (NULL));//créer nbr alea entre 1 et 5 pour choisir entre les 		differentes images
	nbrAlea = Random (1,5);
	

	
/*switch qui permet d'ouvrir une image en fonction d'un nombre aleatoire entre 1 et 5 */
	switch(nbrAlea)
{case 1:
fichier = fopen("image1", "r");
break;
case 2:
fichier = fopen("image2", "r");
break;
case 3:
fichier = fopen("image3", "r");
break; 
case 4:
fichier = fopen("image4", "r");
break;
case 5:
fichier = fopen("image5", "r");
break;
default:
break;
}

    if (fichier != NULL)//

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

 
//while(1);//attente pour eviter de montrer le prompt 

    return 0;

}
	

   
