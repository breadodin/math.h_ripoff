#include "s21_math.h"

long double s21_floor(double x) {
  int integral_x;
  double res;
  if (S21_IS_NAN(x) || S21_IS_INF(x)) {
    res = x;
  } else {
    integral_x = x;
    if (x < 0 && integral_x > x) {
      integral_x = integral_x - 1;
    }
    res = integral_x;
  }
  return res;
}
