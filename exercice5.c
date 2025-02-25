//Programme qui range les elements du tableau T dans l'ordre inverse 


/*
Algorithme ordre inverse d'un tableau T

Variable 
    n , j  , a , i , indice :entiers
    T : tableau entier [50]

Debut
    i <- 0 ; 
    Faire
        i++ ;
        Si ( i > 3 ) alors
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50,la taille du tableau T :");
        Lire (N);
    Tantque ((N < 1) || (N > 50));

    Pour ( i <- 0 ; i < n ; i++)
        Ecrire (" T[" , i , "]=");
        Lire ( T[i])
    FinPour

    Pour ( i <- 0 ; i < n ; i++)
        Ecrire ("T[" , i , "]= ", T[i])
    FinPour

    a <- 1 ;
    Pour ( i <- 0 ; i < n ; i++)
        Si ( i < n - a ) Alors
            j <- T[i] ;
            T[i] <- T[n - a] ;
            T[ n - a] <- T[i] ;
            a++ ;
        FinSi
    FinPour
 
    Ecrire ("L'ordre inverse du tableau est : \n");

    Pour ( i <- 0 ; i < n ; i++)
        Ecrire ("T[", i ,"]=" , T[i]) ;
    FinPour

Fin
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{   
    int n , j , a;
    int i,indice;
    int T [50];

    i = 0 ;
    do 
    {
        i++;
        if (i > 3)
        {
            exit(0);
        }
        printf ("Entrez une valeur entre 1 et 50 , la taille du tableau T : ");
        scanf ("%d", &n);
    }
    while ((n < 1) || (n > 50));



    for ( i = 0 ; i < n ; i++)
    {
        printf (" T[%d]=",i);
        scanf ("%d",&T[i]);
    }

    for ( i = 0 ; i < n ; i++)
    {
        printf ("T[%d] = %d\n", i , T[i]);
    }
    
    a = 1;
    for ( i = 0 ; i < n  ; i++)
    {
       if(i < n-a)
       {
        j = T[i];
        T[i]= T[n-a];
        T[n-a]= j ;
        a++;
       }
    }

    printf (" L'ordre inverse du tableau est : \n");
    for ( i = 0 ; i < n ; i ++)
    {
        printf ("T[%d] = %d \n", i , T[i] );
    }

    return (0);
}
