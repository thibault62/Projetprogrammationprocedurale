#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main()

{	
	FILE* fichier = NULL;
	fichier = fopen("/media/groupe-tvp/b919f1b0-9122-4865-a76b-bb6386984916/doc/history.txt", "a");
	int h=0;
	int m=0;
	int s=0;


    time_t secondes;

    struct tm instant;


    time(&secondes);

    instant=*localtime(&secondes);
        h==instant.tm_hour;
        m==instant.tm_min;
        s==instant.tm_sec;
        


   // printf("%d:%d:%d\n", instant.tm_hour, instant.tm_min, instant.tm_sec);
	fprintf (fichier,": %d h %d min %d s. avec un affichage: ", instant.tm_hour, instant.tm_min, instant.tm_sec);
	fclose(fichier);
    sleep(3);
   // system ("clear");

    
    return 0;

}
