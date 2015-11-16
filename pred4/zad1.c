/*Dat je niz od maksimalno 20 realnih elemenata. Ucitati n*/
//elemenata, a zatim naci maksimalnu vrijednost.
/*--------------------------------------------------------*/
#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    int n;
    int i;
    float V[MAX_SIZE];
    float max;
    
    do{
        printf("Unesite velicinu niza od 1 do 20\n");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_SIZE);

    printf("Unesite %d realnih brojeva\n", n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%f", &V[i]);
        
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
    
    printf("\nMaksimalna vrijednost ucitanog niza realnih brojeva je %f\n", max);
    
    return 0;
}
