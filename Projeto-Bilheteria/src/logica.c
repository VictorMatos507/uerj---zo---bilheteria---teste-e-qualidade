#include "bilheteria.h"

float calcular_preco_unitario(int idade) {
    if (idade <= 12) {
        return 10.0;
    } else if (idade >= 60) {
        return 15.0;
    } else {
        return 30.0;
    }
}

float calcular_preco_total(int idade, int quantidade) {
    if (quantidade < 1 || quantidade > 5) {
        return -1.0;
    }

    float preco_unitario = calcular_preco_unitario(idade);
    return preco_unitario * quantidade;
}
