#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int choixMenu;

printf("=== Menu Principal ===\n\n");
printf("S. Saisie des donnees\n");
printf("A. Affichage des notes\n");
printf("M. Moyenne generale\n");
printf("C. Changement de note\n");
printf("R. Recherche\n");
printf("F. Fin\n");
printf("\n Faites votre choix ? "); //Pour afficher son choix : taper 1,2,3,4,5, et 6 qui représente f pour la fin du programme

scanf("%d", &choixMenu);
printf("\n");
switch (choixMenu)
{
case 1:
printf("Saisissez vos donnees!");
break;
case 2:
printf("Afficher mes informations a l'ecran...");
break;
case 3:
printf("la moyenne generale !");
break;
case 4:
printf("Recherchez le nom de l'etudiant et afficher sa note !");
break;
case 5:
printf("Modifier la note d'un etudiant");
break;
case 6:
printf("fin du programme !");
break;
}

printf("\n\n");
return 0;
}
