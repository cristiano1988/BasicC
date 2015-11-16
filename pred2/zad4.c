/*Napisati C program koji ispisuje veci od dva cijela broja.*/
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int a;
    int b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a > b)
    {
        printf("Veci je %d\n", a);
    }
    else if(a == b)
    {
        printf("Brojevi su jednaki\n");
    }
    else
    {
        printf("Veci je %d\n", b);
    }
    
    return 0;
}
