//Programme qui affiche la valeur maximale du tableau T et qui indique sa position 

/*ALgorithme affichage d'un tableau 
 Constante 
        N = 50

 Variable 
    n,i,max, indice  : entier
    T : tableau entier[50]

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
        ecrire ("Entrez les elements du tableau :");
        lire ( T[i]); 
    FinPour
    
    Pour( i <- 0 ; i < n ; i++)
        ecrire ("T[",i,"]=",T[i]) ;
    FinPour 

    max <- T[0];
    Pour ( i <- 0 ; i < n ; i++)
        Si (T[i] > max )
            max <- T[i];
            indice <- i+1;
        Finsi
    FinPour

    ecrire ("La valeur maximale dans le tableau est: ", max , "position :", indice)

Fin
    */
    
#include <stdio.h>
#include <stdlib.h>

#define N 50

int main()

{   
    int n;
    int i, max , indice  ;
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
        printf (" entrez les elements du tableau :");
        scanf ("%d",&T[i]);
    }

    for ( i = 0 ; i < n ; i++)
    {
        printf (" T[%d] = %d\n", i , T[i] );
    }
    
    max = T[0] ;
    for ( i = 0 ; i < n ; i++ )
    {
        if ( T[i] > max )
        
       {     max = T [i];
            indice = i + 1 ;
        }

    }
        printf ("La valeur maximale dans le tableau est : %d , position %d \n", max,indice );
                
    return (0);
    
}