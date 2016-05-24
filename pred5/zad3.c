/*Dat je niz od maksimalno 30 cjelobrojnih elemenata. -----*/
//Ucitati n elemenata, a zatim omoguciti korisniku da bira neku 
//od sljedecih radnji: izracunavanje sume elemenata niza, 
//racunanje srednje vrijednosti elemenata, pronalazenje minimuma, 
//pronalazenje maksimuma. Omoguciti izvrsavanje vise radnji 
//(jedna za drugom).
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
    
    do{
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
    
    for (i = 0; i < size; i++)
    {
        printf(" %d\n", v[i]);
    }
}

/* prints all array elements ------------------------------*/
float meanValue(int v[], int size)
{
    float aritMean;
    
    aritMean = (float) sumArray(v, size) / size;
    
    return aritMean;
}

/* prints all array elements ------------------------------*/
int minValue(int v[], int size)
{
    int i;
    int min;
    
    for (i = 0; i < size; i++)
    {
        if (i == 0)
        {
            min = v[0];
        }
        else
        {
            if (v[i] < min)
            {
                min = v[i];
            }
        }
    }
    
    return min;
}

/* prints all array elements ------------------------------*/
int maxValue(int v[], int size)
{
    int i;
    int max;
    
    for (i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = v[0];
        }
        else
        {
            if (v[i] > max)
            {
                max = v[i];
            }
        }
    }
    
    return max;
}

int main()
{
    int array[MAX_SIZE];
    int option;
    int n = 0;
    
    n = inputArray(array, MAX_SIZE);
    
    if (n == 0)
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
        
        switch (option)
        {
        case 1:
            n = inputArray(array, MAX_SIZE);
            if (n == 0)
            {
                printf("\nPokrenite program ponovno\n\n");
                
                return 0;
            }
            break;
        case 2:
            printf("\nSuma je %d.\n\n", sumArray(array, n));
            break;
        case 3:
            printf("\nSrednja vrijednost je: %f.\n\n", meanValue(array, n));
            break;
        case 4:
            printf("\nMinimalna vrijednost je: %d.\n\n", minValue(array, n));
            break;
        case 5:
            printf("\nMaksimalna vrijednost je: %d.\n\n", maxValue(array, n));
            break;
        case 6:
            printArray(array, n);
            break;
        }
    }while(option != 7);
    
    return 0;
}
