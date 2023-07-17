#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <limits.h>
#include <stdio.h>

#define S21_E 2.71828182845904523536028747
#define S21_PI 3.14159265358979323846
#define S21_EPSILON 1e-17
#define S21_LN10 2.30258509299404590109

#define S21_NAN 0.0 / 0.0
#define S21_INF_POS +1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_IS_NAN(x) (x != x)
#define S21_IS_INF(x) (x == S21_INF_NEG || x == S21_INF_POS)
#define S21_ARE_NAN(x, y)                                         \
  (S21_IS_NAN(y) || S21_IS_NAN(x) || (y == 0) || S21_IS_INF(x) || \
   (S21_IS_INF(x) && S21_IS_INF(y) && x != y))

#define S21_EXP_POWER_DOUBLE_MAX 709.7827
#define S21_EXP_POWER_DOUBLE_MIN -708.3964

int s21_abs(int x);
long double s21_fabs(double x);

long double s21_pow(double base, double exp);
long double s21_sqrt(double x);
long double s21_exp(double x);
long double s21_log(double x);

long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);

long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);
long double s21_atan_addon(double x);

long double s21_floor(double x);
long double s21_ceil(double x);

long double s21_fmod(double x, double y);

#endif  // S21_MATH_H_
