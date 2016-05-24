/*Napisati funkciju koja ispisuje string obrnutim redom --*/
//Napraviti kratak test program (ucitati string i ispisati 
//obrnutim redoslijedom znakove). Napisati funkciju koja kao 
//parametre uzima jedan string i znak, a vraca broj 
//pojavljivanja tog znaka u stringu. Napisati test 
//program. (Primer: str=“tatatatira”, c=„a‟, povratna 
//vrijednost je 4).
/*--------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

/* clear stdin and input string ending with --------------*/
/* newline character--------------------------------------*/
char *inputStr(char *str)
{
    printf("\nUnesite string\n");
    __fpurge(stdin);
    scanf("%[^\n]s", str);

    return str;
}

/* clear stdin and input character -----------------------*/
char *inputChar(char *ch)
{
    printf("\nUnesite znak\n");
    __fpurge(stdin);
    scanf("%c", ch);

    return ch;
}

/* count character value in string -----------------------*/
int countChar(char *str, char ch)
{   
    int count = 0;
    
    while (*str != '\0')
    {
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    
    return count;
}

/* count all string characters except last one (\0) ------*/
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

/* return pointer to inverted string ----------------------*/
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

int main()
{
    char *str = (char *) malloc(sizeof (char) * MAX_SIZE);
    char *iStr = (char *) malloc(sizeof (char) * MAX_SIZE);
    char a;

    inputStr(str);
    inputChar(&a);
    printf("\nZa string \"%s\" znak '%c' se nalazi %d puta", str, a, countChar(str, a));
    printf("\nZa string \"%s\" njegov inverzan je \"%s\"\n", str, invStr(str, iStr));
    
    free(str);
    free(iStr);
    
    return 0;
}
