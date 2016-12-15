	#include <stdlib.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <sys/wait.h>
	#include <time.h>

		int Random (int _imin, int _imax)
		{return (_imin + (rand () % (_imax-_imin+1)));}


int main(int argv, char *argc){
	
	int pid;
	/*permet de stocker le nombre d utilisation dans un fichier txt*/	
	int car;
	FILE* nbr_utilisation = NULL;
	FILE* nbr_utilisation2 = NULL;
	FILE* nbr_1 = NULL;
	FILE* nbr_12 = NULL;
	FILE* nbr_2 = NULL;
	FILE* nbr_22 = NULL;
	FILE* nbr_3 = NULL;
	FILE* nbr_32 = NULL;
	FILE* alea = NULL;
	system("touch nbr_utilisation2");
	nbr_utilisation=fopen("nbr_utilisation","r");
	nbr_utilisation2=fopen("nbr_utilisation2","w");
	car=fgetc(nbr_utilisation);
	car=car+1;	
 	fprintf(nbr_utilisation2,"%c",car);
	fclose(nbr_utilisation2);
	fclose(nbr_utilisation);
	system("mv nbr_utilisation2 nbr_utilisation");

	
	int nbrAlea;//nombre aleatoire
	int nbrAlea2;//nombre aleatoire
	pid=fork();
	srand (time (NULL));//créer nbr alea entre 1 et 3
	nbrAlea = Random (1,2);//creation d un nbr alea entre 1 et 2 car tout les autres types ne sont pas fais
	nbrAlea2= Random (1,5);
	
	switch(pid)
	{case -1:
	printf("error");
	break;
	case 0:
		switch(nbrAlea)
		{
		case 1:	
		/*permet de stocker le nombre d utilisation dans un fichier txt, il exprime le nombre d utilisation de la fonction statique*/
		
		system("touch nbr_12");
		nbr_1=fopen("nbr_1","r");
		nbr_12=fopen("nbr_12","w");
		system("rm alea");		
		alea=fopen("alea","w");
		car=fgetc(nbr_1);
		car=car+1;	
	 	fprintf(nbr_12,"%c",car);
		fprintf(alea,"%d",nbrAlea2);
		fclose(nbr_12);
		fclose(nbr_1);
		fclose(alea);
		system("mv nbr_12 nbr_1");	
		execl("/home/pierre/Documents/doc/statique/lecture2", "lecture2", NULL);
		break;

		case 2:
		/*permet de stocker le nombre d utilisation dans un fichier txt, il exprime le nombre d utilisation de la fonction dynamique*/	
		
		system("touch nbr_22");
		nbr_2=fopen("nbr_2","r");
		nbr_22=fopen("nbr_22","w");
		car=fgetc(nbr_2);
		car=car+1;	
	 	fprintf(nbr_22,"%c",car);
		fclose(nbr_22);
		fclose(nbr_2);
		system("mv nbr_22 nbr_2");	
		execl("/home/pierre/Documents/doc/dynamique/dynamique", "dynamique", NULL);
		break;

		case 3:	
		/*permet de stocker le nombre d utilisation dans un fichier txt, il exprime le nombre d utilisation de la fonction interactif*/
		
		system("touch nbr_23");
		nbr_3=fopen("nbr_3","r");
		nbr_32=fopen("nbr_32","w");
		car=fgetc(nbr_3);
		car=car+1;	
	 	fprintf(nbr_32,"%c",car);
		fclose(nbr_32);
		fclose(nbr_3);
		system("mv nbr_32 nbr_3");	
		execl("/home/pierre/Documents/doc/interactif/lecture2", "lecture2", NULL);
		break;		
		}
	break;
	default:
	wait(NULL);
	break;
	}
return 0;
}

