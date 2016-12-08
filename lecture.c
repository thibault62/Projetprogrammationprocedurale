#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{

    FILE* fichier = NULL;

    int caractereActuel = 0;
    int compt = 0;

 

    fichier = fopen("image2", "r");

 

    if (fichier != NULL)

    {

        // Boucle de lecture des caractères un à un

        do
		

        {

            caractereActuel = fgetc(fichier); // On lit le caractère

            //printf("%c", caractereActuel); // On l'affiche
	if (caractereActuel == 48)
{
printf("*");
compt++;
}

        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

 

        fclose(fichier);

    }

 

    return 0;

}
//http://www.linuxfocus.org/Francais/May2004/article335.shtml
