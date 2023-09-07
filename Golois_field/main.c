#include <stdio.h>
#include <stdlib.h>

int main()
{
    init();
    printf("           First generation\n");
    printf("\n");
    show();
    array_conversion();
    printf("           Second generation\n");
    printf("\n");
    show();
    array_conversion();
    printf("          Third generation\n");
    printf("\n");
    show();
    return 0;
}
