// Diretiva de pré-processamento
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Definição de uma constante 
#define DEFAULT 15

void generatePassword(int *number) {
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char symbols[]   = "[]!@#{}$%^&*()+?><:";
    
    // Concatenando letras e símbolos
    char characters[200];
    strcpy(characters, letters);
    strcat(characters, symbols);

    int length = *number;
    char *randomString = malloc((length + 1) * sizeof(char)); // Alocando espaço para a string

    if (randomString == NULL) { // Verificando se a alocação foi bem-sucedida
        fprintf(stderr, "Falha ao alocar memória.\n");
        return;
    }

    int charCount = strlen(characters);
    
    for (int i = 0; i < length; i++) {
        // Gera um índice aleatório para selecionar um caractere
        int randIndex = rand() % charCount;
        randomString[i] = characters[randIndex]; // Atribui o caractere aleatório
    }
    
    randomString[length] = '\0'; // Adiciona o caractere nulo ao final da string
    
    printf("%s\n", randomString);
    
    free(randomString); // Libera a memória alocada
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <tamanho_da_senha>\n", argv[0]);
        return 1;
    }

    // Inicializa a semente para números aleatórios
    srand(time(NULL));

    int arg1 = atoi(argv[1]); // Converte o argumento para inteiro

	if (arg1 < DEFAULT) {
        printf("O tamanho mínimo da senha deve ser 15. Definindo para 15.\n");
        arg1 = DEFAULT;
    }

    generatePassword(&arg1);

    return 0;
}
