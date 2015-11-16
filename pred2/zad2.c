/*Napisati program koji od korisnika trazi da unese tri --*/
//cjelobrojne vrijednosti, a zatim ispisuje njihov zbroj i 
//aritmeticku sredinu.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int sum;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    sum = a + b + c;
    
    printf("Zbroj vrijednost je %d\n", sum);
    printf("Aritmeticka sredina je %f\n", (float) sum / 3);
    
    return 0;
}
