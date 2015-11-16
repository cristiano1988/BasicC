/*Napisati C program koji racuna sumu prvih n prirodnih --*/
//brojeva, pri cemu se n zadaje na pocetku programa.
//Koristiti for petlju.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum = 0;
    
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("Uneseni broj nije iz skupa prirodnih brojeva\n");
    
        return 0;
    }
        
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("Suma prvih %d prirodnih brojeva je %d\n", n, sum);
    
    return 0;
}
