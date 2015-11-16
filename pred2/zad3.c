/*Napisati C program koji ucitava sa tipkovnice temperaturu*/
//u Celzijuse i konvertira u Farenhajte. 
//Po formuli: [°F] = [°C] × 9 ⁄ 5 + 32
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int tc;
    float tf;
    
    scanf("%d", &tc);
    
    tf = (tc * 9) / 5.0 + 32.0;
    
    printf("Vrijednost u Farenhajtima je %.f\n", tf);
    
    return 0;
}
