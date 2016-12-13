#include <stdio.h>
#include <stdlib.h>

void afficherTableau(int* tableau2);
int main(void)
{
	
  	
  	int* tableau2 = malloc(sizeof(int)*03*05);
	FILE* fichier = fopen("0","r+");
	char c = 0;
int i=0;
int cpt = 0;

	while ( cpt < 2) {
		c= fgetc(fichier);
		if (c == '\n')
			cpt++;	
	}


	do {
		c= fgetc(fichier);
		if(c == '0' || c == '1') {
			tableau2[i++] = c;
		}
	}while(c != EOF);

    	afficherTableau(tableau2);
	free(tableau2);
	return EXIT_SUCCESS; /* Equivalent à return 0 sous Windows, permet un code portable */
}

void afficherTableau(int* tableau2)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 5; i++) {
    	for(j = 0; j < 3; j++) {
            printf("%c", tableau2[i*03+j]);
if (j==2){ 
printf("\n");

		do
		

		{



			switch(caractereactuel)
		{
		case 49: //1
			printf("%c",987);

		break;
		case 48: //0
			printf("%c",240);
	
		break;
system("clear")
}
}

   	 }
    }



 
}

      
