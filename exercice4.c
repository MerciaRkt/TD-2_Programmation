/*Programme qui copie toutes les composantes strictements positives du tableau T dans un deuxieme tableau TPOS et toutes les valeurs strictements negatives
dans un troisieme tableau TNEG . Et qui affiche les tableau TPOS et TNEG */

/*ALgorithme affichage d'un tableau 
 Constante 
        N = 50
 
 Variable 
    n,i,indice , u , a , max : entier
    T : tableau entier[N]
    TPOS : tableau entier[N]
    TNEG : tableau entier[N]

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
        ecrire ("entrez les elements du tableau T:");
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

    ecrire ("La valeur maximale dans le tableau est: ", max , "position :", indice);

    j <- 0 ;
    Pour ( i <- 0 ; i < n ; i ++)
        Si (T[i] = 0) Alors
            n <- n - 1 ;
            Pour ( j <- i ; j < n ; j ++)
                T[j] <- T[j + 1 ] ;
            FinPour
        FinSi
    FinPour

    Ecrire ("Le nouveau tableau est : \n")
    Pour ( i <- 0 ; i < n ; i ++)
        Ecrire ("T[" , i  , "]=", T[i]) ;
    FinPour

    Ecrire ("\n") ;
    Ecrire ("Les composantes strictements positif dans TPOS et strictements negatif dans TNEG");

     a <- 0 ;
     TPOS[a] <- 0 ;

     Pour ( i = 0 ; i < n ; i++)
        Si ( T[i] > 0)
            TPOS[a] <- T[i];
            a <- a + 1;
        FinSi
    FinPour

    Pour ( i = 0 ; i < a ; i++)
        Ecrire (" tableau  TPOS [" , i ,"] =", TPOS[i]) ;
    FinPour

    Ecrire ("\n") ;
    u <- 0;
    TNEG[u] <- 0 ;

    Pour ( i = 0 ; i < n ; i++)
        Si ( T[i] < 0)
            TNEG [u] <- T[i];
            u <- u + 1;
        FinSi
    FinPour

    Pour ( i = 0 ; i < u ; i++)
        Ecrire (" tableau  TNEG [" , i ,"]= ", TNEG[i]);
    FinPour
    


Fin
*/

#include <stdio.h>
#include <stdlib.h>

#define N 50

int main()

{   
    int n ,u , a ;
    int i , j, max , indice ;
    int T [N];
    int TPOS[N];
    int TNEG[N];
    
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

    printf ("Entrez les elements du tableau T :\n") ;
    for ( i = 0 ; i < n ; i++)
    {
        printf ("indice %d: "  , i);
        scanf ("%d",&T[i]) ;
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
        printf ("La valeure maximale dans le tableau est : %d , position %d \n", max,indice);

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


    printf (" \n");
    printf ("les composantes strictement positif dans TPOS et strictement negatif dans TNEG \n");

    a = 0 ;
    TPOS[a] = 0;
    
    for ( i = 0 ; i < n ; i++)
    {
        if ( T[i] > 0)
        {
            TPOS[a] = T[i];
            a = a + 1;
        }
    }

    for ( i = 0 ; i < a ; i++)
    {
        printf (" tableau  TPOS [%d] = %d \n", i , TPOS[i]);
    }


    printf(" \n");

    u = 0;
    TNEG[u] = 0 ;

    for ( i = 0 ; i < n ; i++)
    {
        if ( T[i] < 0)
        {
            TNEG [u] = T[i];
            u = u + 1;
        }  
    }

    for ( i = 0 ; i < u ; i++)
    {
        printf (" tableau  TNEG [%d] = %d \n", i , TNEG[i]);
    }
    
    return(0);   
}
