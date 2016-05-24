/*Napisati C program koji ucitava duzine kateta i racuna -*/ 
//duzinu hipotenuze. Za racunanje hipotenuze napisati 
//funkciju hipotenuza.
/*--------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

/* returns length of a right triangle hypotenuse ---------*/
/* according to the Pythagorean Theorem ------------------*/
double hypotenuse(float a, float b)
{
    return sqrt(a * a + b * b);
}

int main()
{
    float a;
    float b;
    
    printf("Unesite velicine kateta trokuta\n");
    scanf("%f", &a);
    scanf("%f", &b);
    
    printf("Hipotenuza trokuta iznosi %lf\n", hypotenuse(a, b));
    
    return 0;
}
