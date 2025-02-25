/*Algorithme affichage d'un tableau

variable 
    i , j , n , s , a : entier
    U : tableau entier[100]
    V : tableau entier[100]

Debut
    i <- 0;
    Faire 
        i++;
        Si ( i > 3) Alors
            Fin;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50,la dimension des vecteurs U et V: ");
        Lire (n);
    Tantque ((n < 1) || (n > 50));

    Ecrire ("Les composantes du vecteur U :");
    Pour ( i <- 0 ; i < n ; i++)
        Ecrire ("U[",i, "]= ");
        Lire (U[i]);
    FinPour

    Ecrire ("Les composantes du vecteur V :");
    Pour ( j <- 0 )



*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i , j , n , s , a;
    int U[50];
    int V[50];

    i = 0;
    do
    {
        i++;
        if (i > 3)
        {
            exit(0);
        }
        printf ("Entrez une valeur entre 1 et 50 ,la dimension des vecteurs U et V :");
        scanf ("%d", &n);
    }
    while ((n < 1) || (n > 50));

    printf ("Les composantes du  vecteur U :\n");
    for ( i = 0 ; i < n ; i++)
    {
        printf ("U[%d]=", i);
        scanf ("%d", &U[i]);
    }

    printf ("Les composantes du vecteur V :\n");
    for ( j = 0 ; j < n ; j++)
    {
        printf ("V[%d]=", j);
        scanf ("%d", &V[j]);
    }

    s = 0;
    j = 0 ;
    for (i = 0 ; i < n ; i++)
    {
        a = U[i] * V[j];
        s = s + a ;
        j++;
    }

    printf ("Le produit scalaire des deux vecteurs U et V est : %d\n", s);
}