/*Napisati program koji od korisnika trazi da unese ------*/
//vrijednost u centimetrima, a zatim danu vrijednost konvertira
//u metre. Za unos koristiti cjelobrojne vrijednosti, a metre 
//prikazati kao realne vrijednosti.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int cm;
    float m;
    
    scanf("%d", &cm);
    
    m = cm / 100.0;
    
    printf("Vrijednost u metrima je %.f\n", m);
    
    return 0;
}
