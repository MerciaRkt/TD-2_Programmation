/*Algorithme : affichage d'un tableau

Variable 
    i , j , N , M , s : entiers
    A : tableau entier[100]
    B : tableau entier[100]

Debut
    i <- 0 ; 
    Faire
        i++ ;
        Si ( i > 3 ) alors
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50,la taille du tableau A :");
        Lire (N);
    Tantque ((N < 1) || (N > 50));

    j <- 0 ;
    Faire
        j++;
        Si ( j > 3) Alors 
            Fin ;
        FinSi
        Ecrire ("Entrez une valeur entre 1 et 50,la taille du tableau B :");
        Lire (M);
    Tantque ((M < 1) || (M > 50));

    Ecrire ("Les elements du tableau A :");
    Pour ( i <- 0 ; i < N ; i++)
        Ecrire ("A[",i,"] = ");
        Lire (A[i]);
    FinPour

    Ecrire ("Les elements du tableau B :");
    Pour ( j <- 0 ; j < M ; j++)
        Ecrire ("B[",j,"] = ");
        Lire (B[j]);
    FinPour

    s <- N + M;
    j <- 0 ;
    Pour ( i <- 0) ; i < s ; i++)
        Si (i >= N) alors
            A[i] <- B[j];
            j++ ;
        FinSi
        Ecrire ("A[", i , "] = ");
    FinPour

Fin




*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i , j ,N , M , s ;
    int A [50];
    int B [50] ;

    i = 0;
    do
    {
        i++;
        if ( i > 3)
        {
            exit(0);
        }
        printf ("Entrez une valeur entre 1 et 50 ,la taille du tableau A  😘:");
        scanf ("%d",&N);
    }
    while (( N < 1 ) || ( N > 50 ));

    j = 0 ;
    do 
    {
        j++;
        if (j > 3)
        {
            exit(0);
        }
        printf("Entrez une valeur entre 1 et 50 ,la taille du tableau B :");
        scanf ("%d", &M);
    }
    while(( M < 1 ) || ( M > 50));
 
    printf("Les elements du tableau A :\n");
    for ( i = 0 ; i < N ; i ++)
    {
        printf ("A[%d]= ",i);
        scanf ("%d", &A[i]);
    }

    printf("Les elements du tableau B :\n");
    for ( j = 0 ; j < M ; j ++)
    {
        printf("B[%d]=",j);
        scanf("%d", &B[j]);
    }

    printf (" Apres avoir ajoute les elements de B a la fin de A , on a :\n");
    s = N + M;
    j = 0;
    for ( i = 0 ; i < s ; i++)
    {
        if (i >= N)
        {
                A[i] = B[j];
                j++;
    
        }
        printf("A[%d]= %d\n", i , A[i]);
    }
}
