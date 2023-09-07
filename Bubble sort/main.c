#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int b[SIZE];
    int m;
    srand(time(NULL));
    for (int i = 0; i<SIZE; i++)
    {
        a[i] = rand() % 1000;
        b[i]=a[i];
    }
    for(int k = 0; k<SIZE-1; k++)
    {
        for(int i = 0; i<SIZE-1-k; i++)
        {
            if(a[i]>a[i+1])
            {
                m=a[i+1];
                a[i+1]=a[i];
                a[i]=m;
            }
        }
    }
    for (int i = 0; i<SIZE; i++)
    {
        printf("%3d%10d\n ", a[i], b[i]);
    }
    return 0;
}
