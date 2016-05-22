/*Dat je niz od maksimalno 30 cjelobrojnih elemenata. -----*/
//Ucitati n elemenata, a zatim omoguciti korisniku da bira neku 
//od sljedecih radnji: izracunavanje sume elemenata niza, 
//racunanje srednje vrijednosti elemenata, pronalazenje minimuma, 
//pronalazenje maksimuma. Omoguciti izvrsavanje vise radnji 
//(jedna za drugom).
/*--------------------------------------------------------*/

#include <stdio.h>

#define MAX_SIZE 30

int inputArray(int V[], int maxSize)
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

int sumArray(int V[], int maxSize)
{
    int i;
    int sum = 0;
    
    for(i = 0; i < maxSize; i++)
    {
        sum = sum + V[i];
    }
    
    return sum;
}

void printArray(int V[], int maxSize)
{
    int i;
    
    for(i = 0; i < maxSize; i++)
    {
        printf(" %d\n", V[i]);
    }
}

float meanValue(int V[], int maxSize)
{
    float aritMean;
    
    aritMean = (float) sumArray(V, maxSize) / maxSize;
    
    return aritMean;
}

int minValue(int V[], int maxSize)
{
    int i;
    int min;
    
    for(i = 0; i < maxSize; i++)
    {
        if(i == 0)
        {
            min = V[0];
        }
        else
        {
            if(V[i] < min)
            {
                min = V[i];
            }
        }
    }
    
    return min;
}

int maxValue(int V[], int maxSize)
{
    int i;
    int max;
    
    for(i = 0; i < maxSize; i++)
    {
        if(i == 0)
        {
            max = V[0];
        }
        else
        {
            if(V[i] > max)
            {
                max = V[i];
            }
        }
    }
    
    return max;
}

int main()
{
    int A[MAX_SIZE];
    int option;
    int n = 0;
    
    n = inputArray(A, MAX_SIZE);
    if(n == 0)
    {
        printf("Pokrenite program ponovo\n");
        
        return 0;
    }
    do
    {
        printf("    Opcije:\n\n");
        printf("\t1. Unos elemenata niza.\n");
        printf("\t2. Izracunavanje sume.\n");
        printf("\t3. Racunanje srednje vrijednosti.\n");
        printf("\t4. Racunanje minimalne vrijednosti.\n");
        printf("\t5. Racunanje maksimalne vrijednosti.\n");
        printf("\t6. Ispis niza.\n");
        printf("\t7. Izlaz iz programa.\n");
        printf("\n\t>> ");
        scanf("%d", &option);
        
        switch(option)
        {
            case 1:
                n = inputArray(A, MAX_SIZE);
                if(n == 0)
                {
                    printf("\nPokrenite program ponovno\n\n");
                    
                    return 0;
                }
                break;
            case 2:
                printf("\nSuma je %d.\n\n", sumArray(A, n));
            break;
            case 3:
                printf("\nSrednja vrijednost je: %f.\n\n", meanValue(A, n));
            break;
            case 4:
                printf("\nMinimalna vrijednost je: %d.\n\n", minValue(A, n));
            break;
            case 5:
                printf("\nMaksimalna vrijednost je: %d.\n\n", maxValue(A, n));
            break;
            case 6:
                printArray(A, n);
            break;
        }
    }while(option != 7);
    
    return 0;
}
