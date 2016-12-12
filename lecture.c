#include <stdio.h>
#include <stdlib.h>
#include <time.h>//utile pour la creation d'un nombre aleatoire




/*fonction qui permet de creer le random en fonction des resultats precedents*/
	int Random (int _imin, int _imax)
	{
	return (_imin + (rand () % (_imax-_imin+1)));//explication ???
	}










int main(int argc, char *argv[])

{
system("gcc -o heure-vrai heure-vrai.c;./heure-vrai");
/*clear the screen , open picture and history , write type of lock screen in history */
	system("clear");
   	FILE* fichier = NULL;
   	FILE* history = NULL;
	history = fopen("/media/groupe-tvp/b919f1b0-9122-4865-a76b-bb6386984916/doc/history.txt", "a");
	fprintf(history," statique ");



    int caractereactuel = 0;//creation de notre caractere actuel
    int nbrAlea;//nombre aleatoire
    int linecounter = 0;//compteur de ligne

 
	srand (time (NULL));//créer nbr alea entre 1 et 5 pour choisir entre les differentes images
	nbrAlea = Random (1,5);
	

	fprintf(history," image: ");
/*switch qui permet d'ouvrir une image en fonction d'un nombre aleatoire entre 1 et 5 */
	switch(nbrAlea)
{case 1:
fichier = fopen("image1", "r");
fprintf(history," je suis en pause");
break;
case 2:
fichier = fopen("image2", "r");
fprintf(history," tetris");
break;
case 3:
fichier = fopen("image3", "r");
fprintf(history," start to continue");
break; 
case 4:
fichier = fopen("image4", "r");
fprintf(history," psychédélique");
break;
case 5:
fichier = fopen("image5", "r");
fprintf(history," jul");
break;
default:
break;
}

    if (fichier != NULL)//

    {

        // boucle de lecture des caracteres un a un

        do
		

        {

            caractereactuel = fgetc(fichier); // on lit le caractere

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
	fclose(history);

    }

system("stty cbreak -echo");
getchar();
system("stty cooked -echo");
system("clear");

    return 0;

}


   
