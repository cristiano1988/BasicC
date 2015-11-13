/*Opisati algoritam koji za učitana dva nenegativna cijela*/
//broja sa ulaza ispisuje na izlaz njihov kolicnik i 
//ostatak, koristeći samo operacije zbrajanja i oduzimanja. 
//Voditi racuna o dijeljenju s nulom.
/*--------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int m;
    int n;
    int r;
    int k = 0;
    
    scanf("%d", &m);
    scanf("%d", &n);
    if(n < 0 || m < 0)
    {
        printf("Brojnik i nazivnik ne smiju biti negativni brojevi!\n");
        
        return 0;
    }
    
    r = m;
    if(n != 0)
    {
        while(r >= n)
        {
            r = r - n;
            k++;
        }
        printf("Kolicnik je %d, a ostatak %d\n", k, r);
    }
    else
    {
        printf("Nazivnik ne smije biti nula!\n");
    }
    
    return 0;
}
