#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{

    FILE* fichier = NULL;

    int caractereActuel = 0;
    int lineCounter = 0;

 

    fichier = fopen("image2", "r");

 

    if (fichier != NULL)

    {

        // Boucle de lecture des caractres un  un

        do
		

        {

            caractereActuel = fgetc(fichier); // On lit le caractre

           // printf("%c", caractereActuel); // On l'affiche
	
	//printf("%d",compt);

	switch(caractereActuel)
{
case 49: 
	printf("%c",254);
break;
case 48:
	printf("%c",240);
break;
default:
	printf("\n");
	lineCounter++;
break;
}

	


        } while (lineCounter < 4 ); // On continue tant que compteurglobal n'a pas finis le fichier

 

        fclose(fichier);

    }

 

    return 0;

}
