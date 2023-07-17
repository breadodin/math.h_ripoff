#include "s21_math.h"

long double s21_atan(double x) {
  long double res = S21_NAN;
  if (x == 1) {
    res = S21_PI / 4;
  } else if (x == -1) {
    res = -S21_PI / 4;
  } else if (x == 0) {
    res = 0;
  } else if (x > 1) {
    res = S21_PI / 2 - s21_atan_addon(1 / x);
  } else if (x < -1) {
    res = -S21_PI / 2 - s21_atan_addon(1 / x);
  } else if (x < 1 && x > -1) {
    res = s21_atan_addon(x);
  }
  return res;
}

long double s21_atan_addon(double x) {
  long double stored_x = x, res = x, i = 1;
  do {
    stored_x = -1 * stored_x * x * x * (2 * i - 1) / (2 * i + 1);
    i++;
    res += stored_x;
  } while (s21_fabs(stored_x) >= S21_EPSILON);
  return res;
}
