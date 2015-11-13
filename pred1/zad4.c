/*Opisati algoritam koji za ucitana dva broja sa ulaza ---*/ 
//ispisuje na izlaz njihov maksimum.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    float a;
    float b;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    if(a > b)
    {
        printf("%f\n", a);
    }
    else
    {
        printf("%f\n", b);
    }
    
    return 0;
}
