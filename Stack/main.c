#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
        for(int k=0; k<15; k++)
    {
        int val = k;
        push(val);
    }
    show();
    for(int k=0; k<5; k++)
    {
        pop();
    }
    show();
    return 0;
}
