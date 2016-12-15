#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)

{
FILE* history = NULL;
history = fopen("/home/pierre/Documents/doc/history.txt", "a");//ouverture du fichier d historique permettant par la suite de noter le type de fond d ecran dans l historique
//fprintf(history,"date :");
system("echo $(date +%D) >> /home/pierre/Documents/doc/history.txt");
system("gcc -o heure /home/pierre/Documents/doc/heure.c;./heure");
fprintf(history," dynamique \n-----------\n");
fclose(history);

system("clear");
FILE* heure=NULL;
heure=fopen("heure","w");
srand(time(NULL));//element creant un nombre aleatoire pour la taille des caracteres meme si normalement ce sont les variables d'environements qui doivent gerer cette taille mais nous souhaitions changer cette regle pour permettre une modification de la taille des images quand meme
/*cette idée a été abandonné par la suite car nous souhaitions modifier la taille de l affichage de l heure dans un terminal Xterm or nous n avons pas reussi car nous manquions de temps  */
int random=0;
random = (rand() % (0,3 ));

while (1)
{

time_t secondes;
struct tm instant;
time(&secondes);
instant=*localtime(&secondes);


int h=0;
int m=0;
int s=0;
int i=0;
int s1=0;
int m1=0;
int h1=0;
int j=0;
int k=0;
int l=0;



h=instant.tm_hour;
m=instant.tm_min;
s=instant.tm_sec;
/*switch (random)//cette commande permet de changer la taille du texte du terminal en ayant fais au prealable les modifications dans le fichier .Xconfig
{	
	case 0 :
		{
		break;	
		}
	case 1 :
		{
		system("XTrem*faceSize:15");
		break;	
		}
	case 2 :
		{
		system("XTrem*faceSize:20");
		break;	
		}
	
}*/
while (j<10)
	{
	printf("\n");
	j++;
	}
while (k<35)
	{
	printf(" ");
	k++;
	}

if (h<10)
	{
	printf("%d",h1);
	fprintf(heure,"%d",h1);
	}
printf("%d:",h);
fprintf(heure,"%d:",h);
if (m<10)
	{
	printf("%d",m1);
fprintf(heure,"%d",m1);
	}
printf("%d:",m);
fprintf(heure,"%d:",m);

if (s<10)
	{
	printf("%d",s1);
fprintf(heure,"%d",s1);
	}
printf("%d\n",s);
fprintf(heure,"%d\n",s);
//system("XTrem*faceSize:10");
while (l<10)
	{
	printf("\n");
	l++;
	}
while (m<15)
	{
	printf(" ");
	m++;	
	}
printf("l'heure va s'actualiser dans quelques secondes");

while (i<10)
	{
	printf(".");
	fflush(stdout);
	sleep(1);
	i++;
	}
sleep(1);
system("clear");
}
    return 0;

}
