/*but et d ecrire a la suite le type d affichage*/ 	
#include <stdio.h>
 	#include <time.h>
int main(void)
{FILE* fichier = NULL;
	fichier = fopen("test.txt", "a");
	fprintf(fichier,"a");	
	fclose(fichier);

}
