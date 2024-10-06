#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
