#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{

    FILE* fichier = NULL;

    int caractereActuel = 0;
    int compt = 0;
    int compteurglobal = 0;

 

    fichier = fopen("image2", "r");

 

    if (fichier != NULL)

    {

        // Boucle de lecture des caractres un  un

        do
		

        {

            caractereActuel = fgetc(fichier); // On lit le caractre

           // printf("%c", caractereActuel); // On l'affiche
compteurglobal++;
printf("%d",compt);

if (caractereActuel == 49)//reconnaissance et remplacement de 1 en bloc noir
{/*printf("%c",254);
printf("*");printf("%d",compt);*/}


/*if (caractereActuel == 48)//reconnaissance et remplacement de 0 en espace
{printf("%c",240);}*/

compt++;
if (compt == 4){printf("\n");
compt =0;}

        } while (compteurglobal != 16); // On continue tant que fgetc n'a pas retourn EOF (fin de fichier)

 

        fclose(fichier);

    }

 

    return 0;

}
