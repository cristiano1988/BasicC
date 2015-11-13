/*Opisati algoritam koji za ucitani broj sa ulaza ispisuje */
//na izlaz poruku “Nije” ako vrijednost broja nije 5, a u 
//suprotnom ispisuje poruku “Uneseni broj jednak je 5”.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    if(n != 5)
    {
        printf("Nije\n");
    }
    else
    {
        printf("Uneseni broj jednak je 5\n");
    }
    
    return 0;
}
