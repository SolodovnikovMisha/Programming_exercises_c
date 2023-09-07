#include <stdio.h>
#include <stdlib.h>
#define LAST1 8 //Последний элемент столбца
#define LAST2 8 // Последний элемент строки
int main()
{
    int i, j;
    int myArray[LAST1][LAST2]; // объявляем массив размером 8*8 элементов

    for ( i = 0; i < LAST1; i++ )
        {
            for ( j = 0; j < LAST2; j++ )
            myArray[i][j] = 0;
        }

    printf( "Our array:\n" );
    for ( i = 0; i < LAST1; i++ )
        {
            for ( j = 0; j < LAST2; j++ )
            {
                printf( "[%d][%d]=%d ", i, j, myArray[i][j] );
            }
            printf( "\n" );
        }
    int e = 0;
    int count1=1;
    int count2=2;
    int value =1;
    while(1)
    {
        if(myArray[e][e+1]!=0 && myArray[e+1][e]!=0)
        {
            goto end;
        }
        if(myArray[e][e+1]==0 && myArray[e+1][e]!=0)
        {
            for ( j = e; j < LAST1-count1; j++ )
            {
             myArray[e][j] = 1;
            }
            goto end;
        }
        if(myArray[e][e+1]!=0 && myArray[e+1][e]==0)
        {
            for ( i = e; i < LAST2-count1; i++ )
            {
             myArray[i][e] = 2;
            }
            goto end;
        }
         if(myArray[e][e+1]==0 && myArray[e+1][e]==0)
        {
            for ( j = e; j <= LAST1-count1; j++ )
            {
             myArray[e][j] = value;
             value++;
            }
             for ( i = count2-1; i <= LAST2-count1; i++ )
            {
             myArray[i][LAST1-count1] = value;
             value++;
            }
            for ( j = LAST1-count2; j >= count1-1; j-- )
            {
             myArray[LAST2-count1][j] = value;
             value++;
            }
            for ( i = LAST2-count2; i >= e+1; i-- )
            {
             myArray[i][count1-1] = value;
             value++;
            }
        }
        count1++;
        count2++;
        e++;
    }
    end:
    printf( "Our array:\n" );
    for ( i = 0; i < LAST1; i++ )
        {
            for ( j = 0; j < LAST2; j++ )
            {
                printf( "%2d ", myArray[i][j] );
            }
            printf( "\n" );
        }
    return 0;
}
