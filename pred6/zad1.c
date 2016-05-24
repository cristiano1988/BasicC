/*Ucitati niz tocaka (maksimalno 30). Naci tocku koja je -*/
//najbliza koordinatnom ishodistu. Koristiti funkcije.
//Dodatno: naci tocku koja je najudaljenija od ishodista.
/*--------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 30

/* input x and y coordinates of referenced point -------------*/
struct Point
{
    float m_x;
    float m_y;
};

/* input x and y coordinates of referenced point -------------*/
void inputPoint(struct Point *t)
{
    scanf("\n%f", &(*t).m_x);
    scanf("\n%f", &(*t).m_y);
}

/* print x and y coordinates of input point ------------------*/
void printPoint(struct Point *t)
{
    printf("\n(%f, %f)\n", (*t).m_x, (*t).m_y);
}

/* fill in point array with data using input pointer ---------*/
void inputPointArray(struct Point *t, int size)
{
    int i;
    
    for (i = 0; i < size; i++)
    {
        printf("\nUnesite X i Y koordinate %d. tocke\n", i + 1);
        inputPoint(t++);
    }
}

/* euclid equation for distance calculation from input point -*/
/* to start point of coordinate system -----------------------*/
double getDistance(struct Point t)
{
    return sqrt(t.m_x * t.m_x + t.m_y * t.m_y);
}

/* return point with x and y coordinates from array of points -*/
/* which has higest distance according to euclid equation from */
/* start point of coordinate system ---------------------------*/
struct Point maxDistancePoint(struct Point *t, int size)
{
    int i;
    int n;
    double tmp = getDistance(*t);
    struct Point tMax = *t;
    
    for (i = 0; i < size; i++)
    {
        struct Point tTmp = *t;
        double c = getDistance(tTmp);
        
        t++;
        if (c > tmp)
        {
            tmp = c;
            tMax = tTmp;
        }
    }
    
    return tMax;
}

/* return point with x and y coordinates from array of points -*/
/* which has lowest distance according to euclid equation from */
/* start point of coordinate system ---------------------------*/
struct Point minDistancePoint(struct Point *t, int size)
{
    int i;
    int n;
    double tmp = getDistance(*t);
    struct Point tMin = *t;
    
    for (i = 0; i < size; i++)
    {
        struct Point tTmp = *t;
        double c = getDistance(tTmp);
        
        t++;
        if (c < tmp)
        {
            tmp = c;
            tMin = tTmp;
        }
    }
    
    return tMin;
}

int main()
{
    int size;
    
    do
    {
        printf("\nUnesite velicinu niza tocaka (od 1 do 30). \n");
        scanf("%d", &size);
    }while (size > MAX_SIZE || size <= 0);

    struct Point *tp = malloc(sizeof (struct Point) * size);
    inputPointArray(tp, size);
    struct Point tMin = minDistancePoint(tp, size);
    struct Point tMax = maxDistancePoint(tp, size);
    
    printf("\nNajbliza tocka koordinatnom ishodistu je (%.2f, %.2f)", tMin.m_x, tMin.m_y);
    printf("\nNajudaljenija tocka koordinatnom ishodistu je (%.2f, %.2f)\n\n", tMax.m_x, tMax.m_y);
    
    free(tp);
    
    return 0;
}
