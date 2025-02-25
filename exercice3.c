//Programme qui efface toutes les occurences de la valeur 0 dans le tableau T et qui tasse les elemnts restants et affich le tableau resultant

/*ALgorithme affichage d'un tableau 
 Constante 
        N = 50

 Variable 
    n,i,indice: entier
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
    
    ecrire ("entrez les elements du tableau:");
    Pour( i <- 0 ; i < n ; i++) 
        ecrire ("T[",i,"]=")
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

    ecrire ("La valeur maximale dans le tableau est: ", max , "position :", indice) ;

    j <- 0 ;
    Pour ( i <- 0 ; i < n ; i ++)
        Si (T[i] = 0) Alors
            n <- n - 1 ;
            Pour ( j <- i ; j < n ; j ++)
                T[j] <- T[j + 1 ] ;
            FinPour
        FinSi
    FinPour

    Ecrire ("Le nouveau tableau ets : \n")
    Pour ( i <- 0 ; i < n ; i ++)
        Ecrire ("T[" , i  , "]=", T[i]) ;
    FinPour

Fin
*/
    
#include <stdio.h>
#include <stdlib.h>

#define N 50

int main()

{   
    int n;
    int i, max , j , indice  ;
    int T [50];
    int tab [50] ; 

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
        printf ("indice %d: " , i );
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
        printf ("La valeur maximale dans le tableau est : %d , position %d \n", max,indice);


    
    j = 0 ;
    for ( i = 0 ; i < n ; i++)
    {
        if ( T[i] == 0)
        {
            n = n - 1 ;
            for (j = i ; j < n ; j ++ )
            {
                T[j] = T[ j + 1] ;
            }
        }
        
    }

    printf ("Le nouveau tableau est : \n") ;
    for (i = 0 ; i < n ; i++)
        {
             printf ("T[%d]= %d\n",i , T[i]) ;
        }
    return(0);   
}
