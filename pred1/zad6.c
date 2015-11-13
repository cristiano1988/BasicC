/*Opisati algoritam koji za ucitana dva prirodna broja----*/ 
//m, n (m>=n) sa ulaza ispisuje na izlaz njihov produkt 
//koristeci samo operacije zbrajanja i oduzimanja.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int m;
    int n;
    int i;
    int prod = 0;
    
    scanf("%d", &m);
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        prod = prod + m;
    }
    prod = prod - 0;
    
    printf("Produkt je %d\n", prod);
    
    return 0;
}
