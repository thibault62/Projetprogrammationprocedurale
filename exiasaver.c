#include <stdio.h>
#include <stdlib.h>

void afficherTableau(int tableau[24][80]);
int main(void)
{
FILE* fichier = NULL;
fichier=fopen("Pause","r");

    int tableau[24][80] = fgetc(fichier);
    afficherTableau(tableau);

	return EXIT_SUCCESS; /* Equivalent à return 0 sous Windows, permet un code portable */
}

void afficherTableau(int tableau[24][80])
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 24; i++) {
        for(j = 0; j < 80; j++) {
            printf("Tableau[%d][%d] = %d\n", i, j, tableau[i][j]);
        }
    }
fclose(fichier);
system("clear");
}
