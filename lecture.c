#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{

    FILE* fichier = NULL;

    int caractereActuel = 0;
    
    int lineCounter = 0;

 

    fichier = fopen("image1", "r");

 

    if (fichier != NULL)

    {

        // Boucle de lecture des caractres un  un

        do
		

        {

            caractereActuel = fgetc(fichier); // On lit le caractre

          

	switch(caractereActuel)
{
case 49: //1
	printf("%c",254);
break;
case 48: //0
	printf("%c",240);
break;
case '\t': //tab
	//printf("er");
break;
default:
	printf("\n");
	lineCounter++;
break;
}

	


        } while (lineCounter < 24 ); // On continue tant que compteurglobal n'a pas finis le fichier

 

        fclose(fichier);

    }

 

    return 0;

}
