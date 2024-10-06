// Diretiva de pré-processamento
#include <stdio.h>
#include <stdlib.h>

// Definição de uma constante 
#define PI 3.14

// Protótipo da função
int add(int a, int b);

int main(int argc, char *argv[]) {
	if (argc < 3) {
		printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
	}

	int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

	int result = add(num1, num2);
	printf("Resultado da soma: %d\n", result);

	// Somas adicionais
    float x = 2.5, y = 3.0;
    printf("Multiplicação de x e y: %.2f\n", x * y);

	int notas[5] = {10, 8, 6, 9, 7};
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    float media = soma / 5.0;
    printf("A média é: %.2f\n", media);

	return 0;
}

// Definição da função
int add(int a, int b) {
    return a + b;
}
