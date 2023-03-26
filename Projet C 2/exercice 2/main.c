#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
int nbr;
float pu;
float pht, ptotal;

    printf("Afficher le nombre d'articles:");
    scanf("%f");
    printf("Afficher le prix unitaire: ");
    scanf("%f");

    while (1)
    {
       printf("Saisir le Prix Hors Taxe ? ");
        scanf("%f", &pht);

        if (pht == 0)
            break;

        ptotal = pht * (1 + 18.0/ 100); // Formule de calcul pour l'obtention du prix total
       printf("Résultat du Prix Total : %f\n", ptotal);


    while pht>= 100000
    {
        do
        printf("vous avez une reduction de 20%");
        scanf("%f" , &pht);
    }

    while pht>= 50000 && <100000
    {
        do
        printf("vous avez une reduction de 5%");
        scanf("%f" , &pht);
    }

    while pht<50000
    {
        do
        printf("vous avez une reduction de 0%");
        scanf("%f" , &pht);
    }
    return 0;

      }
}
