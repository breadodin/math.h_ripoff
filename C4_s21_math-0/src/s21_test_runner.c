#include <math.h>

#include "s21_math.h"

int main()
{
  double base, exp, z, z2, x, y;

  printf("\nTesting: ");
  scanf("%lf", &x);
  z = asin(x);
  z2 = s21_asin(x);
  printf("\nmath.h: %lf\n\n", z);
  printf("s21_.h: %lf\n\n", z2);
  return 0;
}
