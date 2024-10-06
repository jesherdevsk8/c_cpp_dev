#include <stdio.h>
#include "funcoes.h"

int main(void) {
    int result = add(5, 3);
    printf("Resultado: %d\n", result);
    
    printMessage("Olá, mundo!");
    
    return 0;
}