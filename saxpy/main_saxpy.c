#include <stddef.h>

void saxpy(size_t n, const float a, const float *x, float *y);

#include <stdio.h>
#include <stdlib.h>

#define N 24

float arrayX [N] = {
                     8.4,6.4,6.5,7.4,8.5,3.6,3.6,3.5,7.4,6.7,5.7,5.9,
                     4.6,2.6,2.5,4.6,4.5,5.2,5.2,8.5,4.6,2.4,5.4,5.5
                   };

float arrayY [N] = { 8.4,6.4,6.5,7.4,8.5,3.6,3.6,3.5,7.4,6.7,5.7,5.9,
                     4.6,2.6,2.5,4.6,4.5,5.2,5.2,8.5,4.6,2.4,5.4,5.5
                   };

int main()
{

  saxpy(sizeof arrayX, N, arrayX, arrayY);

  return 0;
}
