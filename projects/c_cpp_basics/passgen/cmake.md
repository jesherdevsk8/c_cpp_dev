# Documentação Rápida do CMake

## O que é o CMake?

**CMake** é uma ferramenta de automação de compilação que permite gerar arquivos de projeto para diferentes plataformas e compiladores.

## Instalação

### No Ubuntu/Debian

```bash
sudo apt update
sudo apt install cmake

# All dependencies
# sudo apt install make cmake gcc g++ make cmake build-essential git curl
# sudo apt install libboost-dev libncurses5-dev libncursesw5-dev
```

## Estrutura Básica do Projeto

```
meu_projeto/
├── CMakeLists.txt
├── src/
│   ├── main.c
│   └── helpers.c
└── include/
    └── helpers.h
```

### Exemplo de `CMakeLists.txt`

```cmake
cmake_minimum_required(VERSION 3.10)
project(MeuProjeto VERSION 1.0)

include_directories(include)

set(SOURCES src/main.c src/helpers.c)
add_executable(meu_executavel ${SOURCES})
```

## Compilação

1. Navegue até o diretório do projeto:

   ```bash
   cd caminho/para/meu_projeto
   mkdir build
   cd build
   ```

2. Gere os arquivos de compilação:

   ```bash
   cmake ..
   ```

3. Compile o projeto:

   ```bash
   make
   ```

4. Execute o executável:

   ```bash
   ./meu_executavel
   ```

## Comandos Úteis

- **`cmake --build .`**: Compila o projeto.
- **`cmake --version`**: Mostra a versão do CMake.
- **`ccmake .`**: Interface interativa para configuração.

## Recursos

- [Documentação Oficial do CMake](https://cmake.org/documentation/)
- [Tutoriais de CMake](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)

---
