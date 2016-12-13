#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE* ouverture(int temps);

int main()

{
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

	fichier_h=ouverture(dizaines_h);
	fichier_h2=ouverture(unites_h);
	fichier_m=ouverture(dizaines_m)
	fichier_m2=ouverture(unites_m)
	fichier_s=ouverture(dizaines_s)
	fichier_s2=ouverture(unites_s)

    	system("sleep 1");
    	system ("clear");

    }
    return 0;

}

FILE* ouverture(int temps) {//----ouverture
FILE* fichier=NULL;
switch(temps)
{
case 0:
fichier = fopen("0","r");
break;
case 1:
fichier = fopen("1","r");
break;
case 2:
fichier = fopen("2","r");
break;
case 3:
fichier = fopen("3","r");
break;
case 4:
fichier = fopen("4","r");
break;
case 5:
fichier = fopen("5","r");
break;
case 6:
fichier = fopen("6","r");
break;
case 7:
fichier = fopen("7","r");
break;
case 8:
fichier = fopen("8","r");
break;
case 9:
fichier = fopen("9","r");
break;
default:
break;
return fichier;
}
}//------------------------ouverture

