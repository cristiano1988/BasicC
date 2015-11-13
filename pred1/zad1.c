/*Izracunati povrsinu trokuta upotrebom Heronovog obrasca.*/
//a = 2 cm
//b = 4 cm
//c = 5 cm
/*--------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 2.0;
    float b = 4.0;
    float c = 5.0;
    float s;
    float P;
    
    s = (a + b + c) / 2;
    P = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("P = %f\n", P);
    
    return 0;
}