#include "s21_math.h"

long double s21_asin(double x) {
  long double res;
  if (s21_fabs(x) > 1) {
    res = S21_NAN;
  } else if (x == 1) {
    res = S21_PI / 2;
  } else if (x == -1) {
    res = -S21_PI / 2;
  } else {
    double stored_x = x;
    double dividend;
    double divisor;
    res = x;
    int i = 1;
    do {
      dividend = ((stored_x) * (x * x) * (2 * i - 1) * (2 * i - 1));
      divisor = ((2 * i + 1) * (2 * i));
      stored_x = dividend / divisor;
      res = res + stored_x;
      i++;
    } while (s21_fabs(stored_x) >= S21_EPSILON);
  }
  return res;
}
