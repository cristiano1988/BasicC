/*Napisati C program koji na osnovu unesene ocjene ispisuje*/
//uspjeh. Realizirati zadatak uz pomoć if selekcije.
/*--------------------------------------------------------*/
#include <stdio.h>

int main() {
    int ocjena;
    
    printf("\nProgram na osnovu unesene ocjene ispisuje uspjeh.\n");
    printf("\nUnesite ocjenu: ");
    
    scanf("%d", &ocjena);
    
    if(ocjena == 5)
    {
        printf("Odlican!\n");
    }
    else if(ocjena == 4)
    {
        printf("Vrlo dobar!\n");
    }
    else if(ocjena == 3)
    {
        printf("Dobar!\n");
    }
    else if(ocjena == 2)
    {
        printf("Dovoljan!\n");
    }
    else if(ocjena == 1)
    {
        printf("Nedovoljan!\n");
    }
    else
    {
        printf("\nOcjena mora biti izmedju 1 i 5.\n");
    }
    
    return 0;
}
