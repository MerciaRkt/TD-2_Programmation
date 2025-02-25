/*Algorithme affichage d'un tableau

variable 
    

*/#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n , i , min , max , a , b ,  c ,  d ;
    int A [50];

    i = 0 ;
    do 
    {
        i++;
        if (i > 3)
        {
            exit(0);
        }
        printf ("Entrez une valeur entre 1 et 50 , la taille du tableau A : ");
        scanf ("%d", &n);
    }
    while ((n < 1) || (n > 50));

    printf ("Les elements du tableau A :\n");
    for (i = 0 ; i < n ; i++)
    {
        printf("A[%d]=", i);
        scanf("%d",&A[i]);
    }

    max = A[0];
    for ( i = 0 ; i < n ; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            a = i;
        }

        if (A[i]== max)
        {
            b = i;
        }
    }

    min = A[0];
    for ( i= 0 ; i < n ; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            c = i;
        }

        if ( min == A[i])
        {
            d = i ;
        }
    }

    printf ("Le maximum dans le tableau A est: %d , position %d \n",max, a);
    printf ("Le minimum dans le tableau A est :%d , position %d \n", min ,c);

    return(0);

}