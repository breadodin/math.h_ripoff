#include "s21_math_test.h"

int main() {
  static int count = 1;
  Suite *cases[] = {abs_tests(),   acos_tests(), asin_tests(), atan_tests(),
                    ceil_tests(),  cos_tests(),  exp_tests(),  fabs_tests(),
                    floor_tests(), fmod_tests(), log_tests(),  pow_tests(),
                    sin_tests(),   sqrt_tests(), tan_tests(),  NULL};
  printf("\n");
  for (Suite **currentTest = cases; *currentTest != NULL; currentTest++) {
    printf("Current Test: %d\n", count);
    count++;
    SRunner *runner = srunner_create(*currentTest);
    srunner_set_fork_status(runner, CK_NOFORK);
    srunner_run_all(runner, CK_NORMAL);
    srunner_free(runner);
    printf("\n");
  }
  return 0;
}
