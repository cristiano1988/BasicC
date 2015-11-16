/*Napisati C program koji racuna sumu prvih n prirodnih --*/
//brojeva, pri cemu se n zadaje na pocetku programa.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int sum = 0;
    
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("Uneseni broj nije iz skupa prirodnih brojeva\n");
    
        return 0;
    }
    
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    
    printf("Suma prvih %d prirodnih brojeva je %d\n", n, sum);
    
    return 0;
}
