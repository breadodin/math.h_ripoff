#include "s21_math.h"

long double s21_acos(double x) {
  long double res;
  if (s21_fabs(x) > 1) {
    res = S21_NAN;
  } else {
  res = (S21_PI / 2) - s21_asin(x);
  }
  return res;
}
