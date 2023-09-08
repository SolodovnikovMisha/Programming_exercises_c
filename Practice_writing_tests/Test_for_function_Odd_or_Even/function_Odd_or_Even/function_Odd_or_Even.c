#include <stdio.h>
#include <stdlib.h>
#include "function_Odd_or_Even.h"

const char *odd_or_even(const int *v, size_t sz)
{
  int sum = 0;
  for(int i = 0; i < sz; i++)
  {
    sum += v[i];
  }
  return (abs(sum) % 2)? "odd": "even";
}
