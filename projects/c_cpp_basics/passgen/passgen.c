#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpers.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <tamanho_da_senha>\n", argv[0]);
        return 1;
    }

    // Inicializa a semente para números aleatórios
    srand(time(NULL));

    int arg1 = atoi(argv[1]); // Converte o argumento para inteiro

	if (arg1 < 15) {
        printf("O tamanho mínimo da senha deve ser 15. Definindo para 15.\n");
        arg1 = 15;
    }

    generatePassword(&arg1);

    return 0;
}
