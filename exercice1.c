/* Programme qui lit la dimension N du tableau T du type int(dimension maximale :50 composantes) , remplit le tableau par des valeurs entrees 
clavier et affiche le tableau . Calcule et affiche ensuite la somme des elements du tableau */


/*ALgorithme affichage d'un tableau 
 Constante 
        N = 50

 Variable 
    n,i,s : entier
    T : tableau entier[N]

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
    
    Pour( i <- 0 ; i < n ; i++) 
        ecrire ("indice",i,":");
        lire ( T[i]); 
    FinPour
    
    Pour( i <- 0 ; i < n ; i++)
        ecrire ("tableau",i,"=",T[i]) ;
    FinPour      

    s <- 0;

    Pour( i <- 0 ; i < n ; i++)
        s <- s + T[i];
    FinPour
    ecrire ("la somme des valeurs est" , s);

Fin*/  

#include <stdio.h>
#include <stdlib.h>

#define N 50

int main()

{   
    int n;
    int i,s;
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
        printf (" indice %d :",i);
        scanf ("%d",&T[i]);
    }

    for ( i = 0 ; i < n ; i++)
    {
        printf (" tableau [%d] = %d\n", i , T[i]);
    }

    s = 0;
    
    for ( i = 0 ; i < n ;  i++)
    {
        s = s + T[i];
    }
    printf ("la somme des valeurs est : %d\n",s);
    
    return(0);
}    