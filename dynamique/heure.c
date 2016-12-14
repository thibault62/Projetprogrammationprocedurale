#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include </media/groupe-tvp/b919f1b0-9122-4865-a76b-bb6386984916/doc/dynamique/exia.h>//permet la fonction ouverture

/*initialiser la fct afficherTableau avec comme argument tableau2 qui correspond au tableau qui va etre centré*/
void afficherTableauH1(int* tableau2);
void afficherTableauH2(int* tableau2);
void afficherTableauM1(int* tableau2);
void afficherTableauM2(int* tableau2);
void afficherTableauS1(int* tableau2);
void afficherTableauS2(int* tableau2);

FILE* ouverture(int temps);

int main()
{
int* tableau2 = malloc(sizeof(int)*24*5);//creation d un tableau statique de 24*5 avce allocation de memoire

  	int h=0;
  	int m=0;
    	int s=0;
	FILE* fichier_h=NULL;/*differents fichiers qui permettent d'ouvrir les fichiers pbm des dizaines d heure , heures , dizaines de minutes ...*/
	FILE* fichier_h2=NULL;
	FILE* fichier_m=NULL;
	FILE* fichier_m2=NULL;
	FILE* fichier_s=NULL;
	FILE* fichier_s2=NULL;
while(1)
    {
    time_t secondes;

    	struct tm instant;
	time(&secondes);

    	instant=*localtime(&secondes);
        h=instant.tm_hour;/*recupere l heure dans les variables  h m et s*/
        m=instant.tm_min;
        s=instant.tm_sec;
       

    	int dizaines_h = h/10;
	int unites_h = h%10;
	int dizaines_m = m/10;
	int unites_m = m%10;
	int dizaines_s = s/10;
	int unites_s = s%10;	
	printf("%d %d\n",dizaines_h,unites_h);/*extrait */
	printf("%d %d\n",dizaines_m,unites_m);
	printf("%d %d\n",dizaines_s,unites_s);
/*fichier_h equivaut a un fichier qui stocke une image pbm , il correspond a la dizeaine d'heure ,idem pour les autres fonctions*/
	fichier_h=ouverture(dizaines_h);
	fichier_h2=ouverture(unites_h);
	fichier_m=ouverture(dizaines_m);
	fichier_m2=ouverture(unites_m);
	fichier_s=ouverture(dizaines_s);
	fichier_s2=ouverture(unites_s);
/*utilisation des fonctions afficherTableau*/	
	afficherTableauH1(tableau2);
	afficherTableauH2(tableau2);
	afficherTableauM1(tableau2);
	afficherTableauM2(tableau2);
	afficherTableauS1(tableau2);
	afficherTableauS2(tableau2);


    	system("sleep 3");
    	system ("clear");

    }
free(tableau2);
    return 0;

}

