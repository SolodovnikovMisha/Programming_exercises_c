#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 11

int main() /*The first version of the function based on an array.*/
{
    int value = 123456789;
    char array [BUFSIZE]="           0";
        int i= 10;
    while(value)
    {
        array[i] = value % 10 + '0';
        i--;
        value = value / 10;
    }
    printf("%s", array);
}

/*
#define BUFSIZ 11
void  int_to_string(value, array) //The second version of the function based on pointers.
{
    int j;
    char *pa;
    pa = array+BUFSIZE-1;
    *pa-- = '\0';
    while(value > 0)
    {
        j = value%10;
        value = value/10;
        *pa=j+'0';
        pa--;
    }
}

int main()
{
    int value = 12345678;
    char array [BUFSIZE]="         ";
    int_to_string(value, array);
    printf("%s", array);
}
*/
