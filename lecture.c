	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>//utile pour la creation d'un nombre aleatoire




	










	int main(int argc, char *argv[])
	{int nbrAlea;//nombre aleatoire
	FILE* history = NULL;
	FILE* compteur = NULL;
	int cpt;
	FILE* alea = NULL;
	alea=fopen("/home/pierre/Documents/doc/alea","r");
	nbrAlea=fgetc(alea);
	
	nbrAlea=nbrAlea-48;
	fclose(alea);
	history = fopen("/home/pierre/Documents/doc/history.txt", "a");
	fprintf(history,"date :");
	system("echo $(date +%D) >> /home/pierre/Documents/doc/history.txt");
	//system("gcc -o heure-vrai heure-vrai.c;./heure-vrai");
	system("gcc -o heure heure.c;./heure");	
/*clear the screen , open picture and history , write type of lock screen in history */
		//system("clear");
	   	FILE* fichier = NULL;
	   	
		
		fprintf(history," statique ");



	    int caractereactuel = 0;//creation de notre caractere actuel
	    
	    int linecounter = 0;//compteur de ligne

	 
		
	

		fprintf(history,"\n image: ");
	/*switch qui permet d'ouvrir une image en fonction d'un nombre aleatoire entre 1 et 5 */
		switch(nbrAlea)
		{case 1:
		//ces blocs sont sensé recuperer une variable dans un fichier 
		 /*compteur=fopen("cpt_1","r");
		cpt=fgetc(compteur);
		cpt=cpt+1;
		fclose(compteur);
		system("rm cpt_1");
		compteur=fopen("cpt_1","w");
		fprintf(compteur,"%c",cpt);
		fclose(compteur);*/
		 

		fichier = fopen("/home/pierre/Documents/doc/statique/image1-2", "r");
		fprintf(history," je suis en pause\n\n");
		break;
		case 2:
		/*compteur=fopen("cpt_2","r");
		cpt=fgetc(compteur);
		cpt=cpt+1;
		fclose(compteur);
		system("rm cpt_2");
		compteur=fopen("cpt_2","w");
		fprintf(compteur,"%c",cpt);
		fclose(compteur);*/

		fichier = fopen("/home/pierre/Documents/doc/statique/image2-2", "r");
		fprintf(history," tetris\n\n");
		break;
		case 3:
		/*compteur=fopen("cpt_3","r");
		cpt=fgetc(compteur);
		cpt=cpt+1;
		fclose(compteur);
		system("rm cpt_3");
		compteur=fopen("cpt_3","w");
		fprintf(compteur,"%c",cpt);
		fclose(compteur);*/

		fichier = fopen("/home/pierre/Documents/doc/statique/image3-2", "r");
		fprintf(history," start to continue\n\n");
		break; 
		case 4:
		/*compteur=fopen("cpt_4","r");
		cpt=fgetc(compteur);
		cpt=cpt+1;
		fclose(compteur);
		system("rm cpt_4");
		compteur=fopen("cpt_4","w");
		fprintf(compteur,"%c",cpt);
		fclose(compteur);*/

		fichier = fopen("/home/pierre/Documents/doc/statique/image4-2", "r");
		fprintf(history," psychédélique\n\n");
		break;
		case 5:
		/*compteur=fopen("cpt_5","r");
		cpt=fgetc(compteur);
		cpt=cpt+1;
		fclose(compteur);
		system("rm cpt_5");
		compteur=fopen("cpt_5","w");
		fprintf(compteur,"%c",cpt);
		fclose(compteur);*/

		fichier = fopen("/home/pierre/Documents/doc/statique/image5-2", "r");
		fprintf(history," exia\n\n");
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
			printf("%c",987);//affiche carré blanc

		break;
		case 48: //0
			printf("%c",240);//affiche espace
		break;
		case '\t': //tab
			//printf("er");
		break;
		case 848://P
			//printf("\n");
		break;
		default:
			printf("\n      ");
			linecounter++;
		break;
		}

	


		} while (linecounter < 28 ); // on continue tant que compteurglobal n'a pas finis le fichier

	 

		fclose(fichier);
		fclose(history);

	    }

	system("stty cbreak echo");
	getchar();
	system("stty cooked echo");
	system("clear");

	    return 0;

	}


	   
