/*Ucitati string, a zatim omoguciti korisniku da bira neku*/
//od sljedecih radnji: ispis stringa, ispis stringa obrnutim 
//redom, brojanje odredjenog znaka u stringu, odredjivanje 
//duzine stringa, brojanje velikih slova u stringu. Omoguciti 
//izvrsavanje vise radnji (jedna za drugom).
/*--------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

/* clear stdin and input string ending with ---------------*/
/* newline character --------------------------------------*/
char *inputStr(char *str)
{
    printf("\nUnesite string\n");
    __fpurge(stdin);
    scanf("%[^\n]s", str);

    return str;
}

/* clear stdin and input character ------------------------*/
char *inputChar(char *ch)
{
    printf("\nUnesite znak\n");
    __fpurge(stdin);
    scanf("%c", ch);

    return ch;
}

/* count character value in string -------------------------*/
int countChar(char *str, char ch)
{   
    int count = 0;
    
    while (*str != '\0')
    {
        if(*str == ch)
        {
            count++;
        }
        str++;
    }
    
    return count;
}

/* count all string characters except last one (\0) --------*/
int strLen(char *str)
{
    int count = 0;
    
    while (*str != '\0') 
    {
        count++; 
        str++;
    }
    
    return count;
}

/* return pointer to inverted string ------------------------*/
char *invStr(char *str, char *iStr)
{
    int i = 0;
    int n = strLen(str);
    char *iStrP = iStr;
    
    for (i = n - 1; i >= 0; i--)
    {
        *iStrP = str[i];
        iStrP++;
    }
    *iStrP = '\0';
    
    return iStr;
}

/* count ASCII upper case characters in string ---------------*/
/* values are between 65 and 90 ------------------------------*/
int countUpperChars(char *str)
{   
    int count = 0;
    
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            count++;
        }
        str++;
    }
    
    return count;
}

int main()
{
    char *str = (char *) malloc(sizeof (char) * MAX_SIZE);
    char *iStr = (char *) malloc(sizeof (char) * MAX_SIZE);
    char a;
    int option;
    
    inputStr(str);
    do
    {
        printf("    Opcije:\n\n");
        printf("\t1. Unos stringa.\n");
        printf("\t2. Odredjivanje duzine stringa.\n");
        printf("\t3. Broj ponavljanja odredjenog znaka.\n");
        printf("\t4. Ukupan broj velikih znakova.\n");
        printf("\t5. Ispis stringa u obrnutom redoslijedu.\n");
        printf("\t6. Ispis stringa.\n");
        printf("\t7. Izlaz iz programa.\n");
        printf("\n\t>> ");
        scanf("%d", &option);
        
        switch(option)
        {
        case 1:
            inputStr(str);
            break;
        case 2:
            printf("\nDuzina stringa je %d.\n\n", strLen(str));
            break;
        case 3:
            inputChar(&a);
            printf("\nZnak '%c' u stringu \"%s\" pronadjen je %d puta.\n\n", a, str, countChar(str, a));
            break;
        case 4:
            printf("\nU stringu pronadjeno je %d velikih slova.\n\n", countUpperChars(str));
            break;
        case 5:
            printf("\nString u obrnutom redoslijedu je \"%s\".\n\n", invStr(str, iStr));
            break;
        case 6:
            printf("\nUneseni string je \"%s\".\n\n", str);
            break;
        case 7:
            exit(0);
        default:
            printf("\nUnesite ispravan broj jedne od ponudjenih opcija.\n\n");
        }
    }while (option != 7);
    
    free(str);
    free(iStr);
    
    return 0;
}
