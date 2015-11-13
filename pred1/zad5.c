/*Opisati algoritam koji za ucitane nenula brojeve sa ----*/
//ulaza ispisuje na izlaz njihov zbroj.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    float a;
    float b;
    double sum = 0.0;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    if(a != 0)
    {
        sum = sum + a;
    }
    if(b != 0)
    {
        sum = sum + b;
    }
    
    printf("Zbroj je %lf\n", sum);
    
    return 0;
}
