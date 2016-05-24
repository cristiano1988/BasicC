/*Dat je niz od maksimalno 30 cjelobrojnih elemenata. -----*/ 
//Ucitati n elemenata, a zatim izracunati sumu elemenata 
//niza. Ucitavanje elemenata, racunanje sume i ispis 
//elemenata niza realizirati kao posebne funkcije.
/*--------------------------------------------------------*/

#include <stdio.h>

#define MAX_SIZE 30

/* inputs and determines the size of an array and --------*/
/* fills in array with data ------------------------------*/
int inputArray(int v[], int size)
{
    int n;
    int i;
    char term;
    
    do
    {
        printf("Unesite velicinu niza od 1 do 30\n");
        if (scanf("%d%c", &n, &term) != 2 || term != '\n')
        {
            printf("Uneseni broj nije cjelobrojan\n");
            
            return 0;
        }
    }while (n <= 0 || n > size);
    
    printf("Unesite %d cijelih brojeva\n", n);
    
    for (i = 0; i < n; i++)
    {
        if (scanf("%d%c", &v[i], &term) != 2 || term != '\n')
        {
            printf("Uneseni broj nije cjelobrojan\n");
            
            return 0;
        }
    }

    return n;
}

/* calculates and returns the sum of all array elements ---*/
int sumArray(int v[], int size)
{
    int i;
    int sum = 0;
    
    for (i = 0; i < size; i++)
    {
        sum = sum + v[i];
    }
    
    return sum;
}

/* prints all array elements ------------------------------*/
void printArray(int v[], int size)
{
    int i;
    
    printf("Uneseni niz je:\n");
    
    for (i = 0; i < size; i++)
    {
        printf("%d ", v[i]);
    }
    
    printf("\n");
}

int main()
{
    int array[MAX_SIZE];
    int n;
    
    n = inputArray(array, MAX_SIZE);
    
    if (n == 0)
    {
        printf("Pokrenite program ponovo\n");
        
        return 0;
    }

    printf("Suma niza je %d\n", sumArray(array, n));
    printArray(array, n);
    
    return 0;
}
