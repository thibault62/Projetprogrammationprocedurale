/*fonction qui permet l'ouverture des fichiers*/
FILE* ouverture(int temps) {//----ouverture
FILE* fichier=NULL;
switch(temps)
{
case 0:
fichier = fopen("0","r");
break;
case 1:
fichier = fopen("1","r");
break;
case 2:
fichier = fopen("2","r");
break;
case 3:
fichier = fopen("3","r");
break;
case 4:
fichier = fopen("4","r");
break;
case 5:
fichier = fopen("5","r");
break;
case 6:
fichier = fopen("6","r");
break;
case 7:
fichier = fopen("7","r");
break;
case 8:
fichier = fopen("8","r");
break;
case 9:
fichier = fopen("9","r");
break;
default:
break;
return fichier;
}
}//------------------------ouverture
