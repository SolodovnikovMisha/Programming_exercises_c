#include <stdio.h>
#include <stdlib.h>
#include "Exercises.h"
#include <limits.h>
#include <float.h>
#include <math.h>

void exercise10(void)
{
    printf("1. We take the data from the header file <limits.h>\n");
    printf("Variables of type \'signed char\' take values in the range from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type \'unsigned char\' take values in the range from 0 to %d\n", UCHAR_MAX);
    printf("Variables of type \'signed short int\' take values in the range from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Variables of type \'unsigned short int\' take values in the range from 0 to %d\n", USHRT_MAX);
    printf("Variables of type \'signed int\' take values in the range from %d to %d\n", INT_MIN, INT_MAX);
    printf("Variables of type \'unsigned int\' take values in the range from 0 to %u\n", UINT_MAX);
    printf("Variables of type \'signed long int\' take values in the range from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Variables of type \'unsigned long int\' take values in the range from 0 to %lu\n", ULONG_MAX);
    printf("Variables of type \'float\' take values in the range from %.0f to %f\n", FLT_MIN, FLT_MAX);
    printf("Variables of type \'double\' take values in the range from %.0lf to %lf\n", DBL_MIN, DBL_MAX);
    printf("Variables of type \'long double\' take values in the range from %.0Lf to %Lf\n", LDBL_MIN, LDBL_MAX);

    printf("\n2. We get the data by directly calculating \n");
}
