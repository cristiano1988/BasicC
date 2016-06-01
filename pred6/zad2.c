/*Konvertirati iz binarnog u hexadecimalni zapis: --------*/
//0100 0111 0101 0111
//1101 0100 1010 1001
//Konvertirati iz hexadecimalnog u binarni zapis:
//0x8000
//0x1234
//0x9B6C
/*--------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decToBin(short dec, short *bin, short f)
{
    int i;

    for (i = 0; i < f; i++)
    {
        *bin = (dec & (2 * f)) != 0;
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
}

void strToBin(char *str, short *bin, short f)
{
    while(*str != '\0'){
        switch(*str){
        case '0':
            decToBin(0, bin, f);
            break;
        case '1':
            decToBin(1, bin, f); 
            break;
        case '2':
            decToBin(2, bin, f);
            break;
        case '3':
            decToBin(3, bin, f);
            break;
        case '4':
            decToBin(4, bin, f);
            break;
        case '5':
            decToBin(5, bin, f);
            break;
        case '6':
            decToBin(6, bin, f);
            break;
        case '7':
            decToBin(7, bin, f);
            break;
        case '8':
            decToBin(8, bin, f);
            break;
        case '9':
            decToBin(9, bin, f);
            break;
        case 'a':
            decToBin(10, bin, f);
            break;
        case 'b':
            decToBin(11, bin, f);
            break;
        case 'c':
            decToBin(12, bin, f);
            break;
        case 'd':
            decToBin(13, bin, f);
            break;
        case 'e':
            decToBin(14, bin, f);
            break;
        case 'f':
            decToBin(15, bin, f);
            break;
        default:
            printf("\nInvalid hex digit %c ", *str);
        }
        bin = bin + f;
        str++;
    }
}

long int binToDec(long int bin, long int num)
{
    int i = 0;
    int rem;

    num = 0;
    while(bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        num = num + (rem * pow(2, i));
        ++i;
    }
    
    return num;
}

void printHex(long int hex)
{
    printf("%lx", hex & 0xffff);
}

int main()
{
    char *hex = (char *) malloc(100 * sizeof(char));
    short *bin = (short *) malloc(100 * sizeof(short));
    short *bin1 = (short *) malloc(100 * sizeof(short));
    short *bin2 = (short *) malloc(100 * sizeof(short));
    short *bin3 = (short *) malloc(100 * sizeof(short));
    long int b, hexaDec, b1hexaDec, b2hexaDec;
    long int b1 = 100011101010111; // 0x4757
    long int b2 = 1101010010101001; // 0xd4a9
    char h1[] = "8000";
    char h2[] = "1234";
    char h3[] = "9b6c";

    printf("Enter a Hex value: ");
    scanf("%s", hex);
    printf("Binary value is: ");
    strToBin(hex, bin, 4);
    printBin(bin);
    printf("\nEnter a Bin value: ");
    scanf("%ld", &b);
    hexaDec = binToDec(b, hexaDec);
    printf("Hex value is: ");
    printHex(hexaDec);
        
    strToBin(h1, bin1, 4);
    strToBin(h2, bin2, 4);
    strToBin(h3, bin3, 4);
    b1hexaDec = binToDec(b1, b1hexaDec);
    b2hexaDec = binToDec(b2, b2hexaDec);
    
    printf("\nBinaran broj '%ld' je u heksadecimalnom zapisu ", b1);
    printHex(b1hexaDec);
    printf("\nBinaran broj '%ld' je u heksadecimalnom zapisu ", b2);
    printHex(b2hexaDec);
    printf("\nHeksadecimalan broj %s je u binarnom zapisu. ", h1);
    printBin(bin1);
    printf("\nHeksadecimalan broj %s je u binarnom zapisu. ", h2);
    printBin(bin2);
    printf("\nHeksadecimalan broj %s je u binarnom zapisu. ", h3);
    printBin(bin3);
    printf("\n");

    free(hex);
    free(bin);
    free(bin1);
    free(bin2);
    free(bin3);
    
    return 0;
}
