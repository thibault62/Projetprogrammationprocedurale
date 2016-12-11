#ce programme permet de choisir entre les 3 ecrans de verrouillage
min=1
max=3
number=$[($RANDOM % ($[$max - $min] + 1)) + $min]
#changement de repertoire pour utiliser chemins relatif(plus court et moins d erreur)
cd /media/groupe-tvp/b919f1b0-9122-4865-a76b-bb6386984916/doc

#case qui permet de choisir entre les ecrans de verouilage sne changenat de repertoire , en compilant pour avoir un executable le plus recent possible puis en l'executant

case $number in
   1) cd statique;gcc -o lecture2 lecture2.c;./lecture2;;
   2) cd dynamique;gcc -o lecture2 lecture2.c;./lecture2;;
   3) cd interactif;gcc -o lecture2 lecture2.c;./lecture2;;
esac
