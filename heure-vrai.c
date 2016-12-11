    /* Fichier source date_heure.c */
    #include <stdio.h>
    /* Donne acces à la fonction localtime()
    (heure et date locales) ainsi qu'à la structure tm
    qu'on utilise ci-dessous.
    */
    #include <time.h>
    /*
    Tableaux utilisés pour convertir un code de jour de semaine (entre 0 et 6) ou de mois
    (entre 0 et 11) en une chaîne de caractères.
    [Ignorer complètement le "static" et les "const" ne nuit pas à la compréhension.]
    */
    static const char *const jours[7] =
      { "dimanche", "lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi"
    };
    static const char *const mois[12] =
      { "janvier", "fevrier", "mars", "avril", "mai", "juin",
      "juillet", "août", "septembre", "octobre", "novembre", "décembre"
    };
    int main (void)
    {
	FILE* fichier = NULL;
	fichier = fopen("test.txt", "w");

    /* On place une date "abstraite" dans date_heures_actuelles. */
      time_t date_heures_actuelles = time (NULL);
    /*
    Pointeur vers une structure tm dont le type est défini dans le fichier de la bibliothèque standard time.h .
    Les membres de cette structure tm permettent de lire l'année, le mois, etc correspondant à une date donnée.
    En initialisant la structure avec localtime(&date_heures_actuelles), on place dans les membres de la structure
    l'année actuelle, le mois actuel, etc.
    Restera plus qu'a rendre comprehensibles ces valeurs en utilisant les tableaux ci-dessus pour convertir les "codes" retournés.
    */
      struct tm *temps_humain = localtime (&date_heures_actuelles);
      int annee, i_mois, jour_mois, i_jour_semaine, heures, minutes, secondes;
    /* Les instructions ci-dessous accedent à différents membres de la structure temps_humain . */
      annee = 1900 + temps_humain->tm_year;
      jour_mois = temps_humain->tm_mday;/* "month day" */
      i_mois = temps_humain->tm_mon;/* indice du mois */
      i_jour_semaine = temps_humain->tm_wday;/* "week day". dimanche = 0, lundi = 1, etc */
      heures = temps_humain->tm_hour;
      minutes = temps_humain->tm_min;
      secondes = temps_humain->tm_sec;
    /* Affichage compréhensible de la date et de l'heure courantes. */
      fprintf (fichier,"utilisation: %s %d %s %d ", jours[i_jour_semaine], jour_mois,
              mois[i_mois], annee);
      fprintf (fichier,": %d h %d min %d s. avec un affichage:", heures, minutes, secondes);
	fclose(fichier);
      return 0;
    }

