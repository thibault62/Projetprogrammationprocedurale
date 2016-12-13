#include <stdio.h>
#include <stdlib.h>

void afficherTableau(int* tableau1);
int main(void)
{
  	int* tableau1 = malloc(sizeof(int)*80*24);
	FILE* fichier = fopen("image1(2)","r+");//changer nom ----------------------------------------------------
	char c = 0;
	char v=0;
	char b=0;
	int L=0;
	int C=0;
	int col=0;
	int lin=0;
	int o=0;
	while (v!='\0')
        {
        while (b!='\n')
            {
            b= fgetc(fichier);
            C++;
            }
        v= fgetc(fichier);
        L++;
        b=0;
        }
    col=(80-C)/2;
    lin=(80-L)/2;
    for (o=80*lin+col+1, o=80*24-(80*lin+col+1), o=o+80)
        {
        if (o==78-col%80)
            {
            o=o+C+1;
            }
        }





int i=0;
int cpt = 0;
	while ( cpt < 2)
	{
		c= fgetc(fichier);
		if (c == '\n')
			cpt++;
	}




	do
	{
		c= fgetc(fichier);
		if(c == '0' || c == '1')
		{
			tableau1[i++] = c;
		}
	}while(c != EOF);

    	afficherTableau(tableau1);
	free(tableau1);
	return EXIT_SUCCESS; // Equivalent à return 0 sous Windows, permet un code portable
}

void afficherTableau(int* tableau1)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 24; i++)
    {
    	for(j = 0; j < 80; j++)
    	{
            printf("Tableau1[%d][%d] = %c\n", i, j, tableau1[i*80+j]);


        }
    }
}
