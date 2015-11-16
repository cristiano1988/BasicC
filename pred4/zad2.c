/*Dat je niz od maksimalno 20 realnih elemenata. Ucitati n*/
//elemenata, a zatim sortirati niz u rastucem redoslijedu.
/*--------------------------------------------------------*/
#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    int n;
    int i;
    float V[MAX_SIZE];
    float tmp;
    
    do{
        printf("Unesite velicinu niza od 1 do 20 \n");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_SIZE);
    
    printf("Unesite %d realnih brojeva\n", n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%f", &V[i]);
        if(i > 0 && V[i] < V[i-1])
        {
            tmp = V[i];
            V[i] = V[i-1];
            V[i-1] = tmp;
        }
    }

    printf("Sortirani niz je:");
    for(i = 0; i < n; i++)
    {
        printf(" %f", V[i]);
    }
    printf("\n");
    
    return 0;
}
