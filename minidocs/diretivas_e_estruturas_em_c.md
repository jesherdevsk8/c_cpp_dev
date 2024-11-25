Certamente! Aqui estão exemplos de **diretivas de pré-processador** e **estruturas em C** para que você possa praticar e fixar o aprendizado.

---

### **1. Diretivas do Pré-Processador**
As diretivas são processadas antes da compilação do código. Algumas comuns incluem `#define`, `#include`, `#ifdef`, e `#ifndef`.

#### **Exemplo com `#define`**
```c
#include <stdio.h>
#define PI 3.14159

int main() {
    float raio = 5.0;
    float area = PI * raio * raio;

    printf("Área do círculo com raio %.2f é %.2f\n", raio, area);
    return 0;
}
```

#### **Exemplo com `#ifdef` e `#ifndef`**
```c
#include <stdio.h>

// Defina DEBUG para ativar mensagens de depuração
#define DEBUG

int main() {
#ifdef DEBUG
    printf("Modo de depuração ativado.\n");
#endif

#ifndef DEBUG
    printf("Modo de depuração desativado.\n");
#endif

    printf("Programa rodando normalmente.\n");
    return 0;
}
```

---

### **2. Estruturas em C**
As estruturas (`struct`) permitem criar tipos de dados personalizados que agrupam variáveis.

#### **Exemplo básico de `struct`**
```c
#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int main() {
    struct Ponto p1 = {2, 3};
    struct Ponto p2 = {5, 7};

    printf("Ponto 1: (%d, %d)\n", p1.x, p1.y);
    printf("Ponto 2: (%d, %d)\n", p2.x, p2.y);
    return 0;
}
```

#### **Exemplo com função usando `struct`**
```c
#include <stdio.h>

struct Retangulo {
    int largura;
    int altura;
};

int calcularArea(struct Retangulo r) {
    return r.largura * r.altura;
}

int main() {
    struct Retangulo ret = {10, 5};
    int area = calcularArea(ret);

    printf("Área do retângulo: %d\n", area);
    return 0;
}
```

---

### **3. Combinação de Diretivas e Estruturas**
#### **Usando `#define` com `struct`**
```c
#include <stdio.h>
#define MAX 100

struct Pessoa {
    char nome[MAX];
    int idade;
};

int main() {
    struct Pessoa p = {"Carlos", 25};

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    return 0;
}
```