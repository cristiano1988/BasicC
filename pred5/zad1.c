/*Napisati C program koji ucitava duzine kateta i racuna -*/ 
//duzinu hipotenuze. Za racunanje hipotenuze napisati 
//funkciju hipotenuza.
/*--------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

float hipotenuza(float a, float b)
{
    float c;
    
    c = sqrt(a * a + b * b);
    
    return c;
}

int main()
{
    float a;
    float b;
    float c;
    
    printf("Unesite velicine kateta trokuta\n");
    scanf("%f", &a);
    scanf("%f", &b);
    
    c = hipotenuza(a, b);
    
    printf("Hipotenuza trokuta iznosi %f\n", c);
    
    return 0;
}
