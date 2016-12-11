#ce programme permet de choisir entre les 3 ecrans de verrouillage
min=1
max=1
number=$[($RANDOM % ($[$max - $min] + 1)) + $min]
#changement de repertoire pour utiliser chemins relatif(plus court et moins d erreur)
cd /media/groupe-tvp/b919f1b0-9122-4865-a76b-bb6386984916/doc

#IF qui permet de choisir entre les ecrans de verouilages en changeant de repertoire , en compilant pour avoir un executable le plus recent possible puis en l'executant

#utilisation de IF a la place de CASE car beaucoup d instruction a ecrire et donc plus lisible avec des IF


	if [ $number == 1 ]
	then
	gcc -o heure-vrai heure-vrai.c
	./heure-vrai
	cd statique;
	
	gcc -o lecture2 lecture2.c;
	./lecture2
	
	fi


	if [ $number == 2 ]
	then
	cd dynamique;
	rm lecture2;
	gcc -o lecture2 lecture2.c;
	./lecture2
	fi


	if [ $number == 3 ]
	then
	cd interactif;
	rm lecture2;
	gcc -o lecture2 lecture2.c;
	./lecture2
	fi
