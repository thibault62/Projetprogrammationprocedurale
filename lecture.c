#include <stdio.h>
#include <stdlib.h>
#include <time.h>//utile pour la creation d'un nombre aleatoire
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>


/*fonction qui permet de creer le random en fonction des resultats precedents*/
	int Random (int _imin, int _imax)
	{
	return (_imin + (rand () % (_imax-_imin+1)));
	}

/*touche*/
int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;
}
	














int main(int argc, char *argv[])

{
/*clear the screen , open picture and history , write type of lock screen in history */
	system("clear");
   	FILE* fichier = NULL;
   	FILE* history = NULL;
	history = fopen("/media/groupe-tvp/b919f1b0-9122-4865-a76b-bb6386984916/doc/history.txt", "a");
	fprintf(history," statique ");



    int caractereactuel = 0;//creation de notre caractere actuel
    int nbrAlea;//nombre aleatoire
    int linecounter = 0;//compteur de ligne

 
	srand (time (NULL));//créer nbr alea entre 1 et 5 pour choisir entre les 		differentes images
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
	fclose(history);

    }

 
while(!kbhit())
 printf("");

    return 0;

}


   
