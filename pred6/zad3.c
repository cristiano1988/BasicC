/*Ucitati dva pozitivna cijela broja. Prikazati ih u -----*/
//binarnom zapisu, kao i njihove komplemente i rezultate 
//logickog I, logickog ILI i ekskluzivnog logickog ILI.
//Realizirati funkciju koja cjelobrojnu vrijednost prikazuje
//kao binarnu.
/*--------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void decToBin(short dec, short *bin)
{
    int i;
    
    for (i = 0; i < 16; i++)
    {
        *bin = (dec & 0x8000) != 0;
        dec <<= 1;
        bin++;
    }
}

void printBin(short *bin)
{
    int i;
    
    for (i = 1; i <= 16; i++)
    {
        printf("%hd", *bin);
        bin++;
        if (i % 4 == 0)
        {
            printf (" ");
        }
    }
    printf ("\n");
}

void logicalOR(short* b1, short* b2, short* binOR)
{
    int i;
       
    for (i = 0; i < 16; i++)
    {
        *binOR = *b1 | *b2;
        binOR++;
        b1++;
        b2++;
    }
}

void logicalXOR(short* b1, short* b2, short* binXOR)
{
    int i;
       
    for (i = 0; i < 16; i++)
    {
        *binXOR = *b1 ^ *b2;
        binXOR++;
        b1++;
        b2++;
    }
}

void logicalAND(short* b1, short* b2, short* binAND)
{
    int i;
       
    for (i = 0; i < 16; i++)
    {
        *binAND = *b1 & *b2;
        binAND++;
        b1++;
        b2++;
    }
}

int main()
{
    short dec1, dec2;
    short *bin1 = (short *) malloc(100 * sizeof(short));
    short *bin2 = (short *) malloc(100 * sizeof(short));
    short *binOR = (short *) malloc(100 * sizeof(short));
    short *binXOR = (short *) malloc(100 * sizeof(short));
    short *binAND = (short *) malloc(100 * sizeof(short));
    
    printf("Unesite 1. decimalni broj? ");
    scanf("%hd", &dec1);
    printf("Unesite 2. decimalni broj? ");
    scanf("%hd", &dec2);
    
    
    printf ("Binaran broj 1.: "); 
    decToBin(dec1, bin1);
    printBin(bin1);
    printf ("Binaran broj 2.: "); 
    decToBin(dec2, bin2);
    printBin(bin2);

    logicalOR(bin1, bin2, binOR);
    logicalXOR(bin1, bin2, binXOR);
    logicalAND(bin1, bin2, binAND);
    printf ("OR:  ");
    printBin(binOR);
    printf ("XOR: ");
    printBin(binXOR);
    printf ("AND: ");
    printBin(binAND);
    
    free(bin1);
    free(bin2);
    free(binOR);
    free(binXOR);
    free(binAND);
    
    return 0;
}
