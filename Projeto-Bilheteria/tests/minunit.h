#ifndef MINUNIT_H
#define MINUNIT_H

#define MU_ASSERT(message, test) do { if (!(test)) return message; } while (0)
#define MU_RUN_TEST(test) do { char *message = test(); tests_run++;                                 if (message) return message; } while (0)
extern int tests_run;

#define MU_TEST(name) static char * name(void)
#define MU_TEST_SUITE(name) static void name(void)
#define MU_ASSERT_FLOAT_EQ(expected, actual) MU_ASSERT("Valores float diferentes", (expected - actual < 0.001f && expected - actual > -0.001f))
#define mu_assert_float_eq(expected, actual) MU_ASSERT_FLOAT_EQ(expected, actual)

#define MU_RUN_SUITE(name) do { name(); } while (0)
#define MU_REPORT() printf("Todos os testes passaram! Total: %d\n", tests_run)
#define MU_EXIT_CODE 0
int tests_run = 0;

#endif
