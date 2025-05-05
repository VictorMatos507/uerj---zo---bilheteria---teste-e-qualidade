#include <stdio.h>
#include "../src/bilheteria.h"
#include "minunit.h"

MU_TEST(test_preco_unitario) {
    mu_assert_float_eq(10.0, calcular_preco_unitario(5));
    mu_assert_float_eq(30.0, calcular_preco_unitario(25));
    mu_assert_float_eq(15.0, calcular_preco_unitario(70));
}

MU_TEST(test_preco_total_valido) {
    mu_assert_float_eq(30.0, calcular_preco_total(3, 3));
    mu_assert_float_eq(150.0, calcular_preco_total(40, 5));
    mu_assert_float_eq(45.0, calcular_preco_total(65, 3));
}

MU_TEST(test_preco_total_invalido) {
    mu_assert_float_eq(-1.0, calcular_preco_total(25, 0));
    mu_assert_float_eq(-1.0, calcular_preco_total(25, 6));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_preco_unitario);
    MU_RUN_TEST(test_preco_total_valido);
    MU_RUN_TEST(test_preco_total_invalido);
}

int main() {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}
