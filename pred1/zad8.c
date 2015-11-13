/*Opisati algoritam koji za ucitane koeficijente jednadzbi*/
//dva pravca (oblika y=ax+b) ispisuje na izlaz njihov presjek 
//ili odgovarajucu poruku ako su pravci paralelni ili se 
//preklapaju. Voditi racuna o dijeljenju s nulom.
/*--------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a1;
    float a2;
    float b1;
    float b2;
    float x = 0.0;
    float y = 0.0;
    
    printf("Unesite koeficijente pravca oblika y=ax+b\n");
    printf("a1 = ");
    scanf("%f", &a1);
    printf("b1 = ");
    scanf("%f", &b1);
    printf("a2 = ");
    scanf("%f", &a2);
    printf("b2 = ");
    scanf("%f", &b2);
    
    if(a1 == a2)
    {
        printf("\nPravci su paralelni!");
        
        if(b1 == b2)
        {
            printf("\nPravci se preklapaju!");
        }
    }
    else
    {
        x = (b2 - b1) / (a1 - a2);
        y = a1 * x + b1;
        
        printf("\nPravci se sjeku u tocki (%f, %f)\n", x, y);
    }
    
    return 0;
}
