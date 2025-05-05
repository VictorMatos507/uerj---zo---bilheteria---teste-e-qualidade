#include <stdio.h>
#include "bilheteria.h"

int main() {
    int idade, quantidade;
    printf("Digite a idade do visitante: ");
    scanf("%d", &idade);
    printf("Digite a quantidade de bilhetes: ");
    scanf("%d", &quantidade);

    float total = calcular_preco_total(idade, quantidade);

    if (total < 0) {
        printf("Erro: quantidade de bilhetes excede o limite permitido (1 a 5).\n");
    } else {
        printf("Preço total: R$ %.2f\n", total);
    }

    return 0;
}
