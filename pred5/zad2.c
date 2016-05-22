/*Dat je niz od maksimalno 30 cjelobrojnih elemenata. -----*/ 
//Ucitati n elemenata, a zatim izracunati sumu elemenata 
//niza. Ucitavanje elemenata, racunanje sume i ispis 
//elemenata niza realizirati kao posebne funkcije.
/*--------------------------------------------------------*/

#include <stdio.h>

#define MAX_SIZE 30

int unosNiz(int V[], int maxSize)
{
    int n;
    int i;
    char term;
    
    do{
        printf("Unesite velicinu niza od 1 do 30\n");
        if(scanf("%d%c", &n, &term) != 2 || term != '\n')
        {
            printf("Uneseni broj nije cjelobrojan\n");
            
            return 0;
        }
    }while(n <= 0 || n > maxSize);
    
    printf("Unesite %d cijelih brojeva\n", n);
    
    for(i = 0; i < n; i++)
    {
        if(scanf("%d%c", &V[i], &term) != 2 || term != '\n')
        {
            printf("Uneseni broj nije cjelobrojan\n");
            
            return 0;
        }
    }

    return n;
}
int sumNiz(int V[], int maxSize)
{
    int i;
    int sum = 0;
    
    for(i = 0; i < maxSize; i++)
    {
        sum = sum + V[i];
    }
    
    return sum;
}
void ispisNiz(int V[], int maxSize)
{
    int i;
    
    printf("Uneseni niz je:\n");
    for(i = 0; i < maxSize; i++)
    {
        printf("%d ", V[i]);
    }
    printf("\n");
}

int main()
{
    int V[MAX_SIZE];
    int n;
    
    n = unosNiz(V, MAX_SIZE);
    if(n == 0)
    {
        printf("Pokrenite program ponovo\n");
        
        return 0;
    }
    printf("Suma niza je %d\n", sumNiz(V, n));
    ispisNiz(V, n);
    
    return 0;
}
