#include <stdio.h>
#include <stdlib.h>

int main()
{
    init();
    show();
    int t = 1;
    while(t <= 8)
    {
        put(t);
        t++;
    }
    show();
    int j=1;
    while(j <= 6)
    {
        get();
        j++;
    }

    show();
    put(9);
    put(10);
    put(11);
    put(12);
    put(13);
    put(14);
    put(15);
    put(16);
    get();
    show();
    put(17);
    show();
    return 0;
}
