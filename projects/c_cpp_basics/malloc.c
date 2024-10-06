#include <stdio.h>
#include <stdlib.h>

// Usar malloc para alocar memória dinamicamente e liberar com free.
int main() {
    int *arr = (int*) malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    printf("Vetor alocado dinamicamente: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
