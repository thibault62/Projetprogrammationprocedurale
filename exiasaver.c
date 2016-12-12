#include <stdio.h>
#include <stdlib.h>

void afficherTableau(int* tableau);
int main(void)
{
  	int* tableau = malloc(sizeof(int)*80*24);
	FILE* fichier = fopen("Pause","r+");
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
			tableau[i++] = c;
		}
	}while(c != EOF);

    	afficherTableau(tableau);
	free(tableau);
	return EXIT_SUCCESS; /* Equivalent à return 0 sous Windows, permet un code portable */
}

void afficherTableau(int* tableau)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 24; i++) {
    	for(j = 0; j < 80; j++) {
            printf("Tableau[%d][%d] = %d\n", i, j, tableau[i*80+j]);
        }
    }
} 
