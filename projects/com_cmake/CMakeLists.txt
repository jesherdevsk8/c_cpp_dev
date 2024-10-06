cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(teste VERSION 1.0)

# Especifica os diretórios onde buscar por includes
include_directories(${PROJECT_SOURCE_DIR})

# Adiciona o executável
add_executable(teste main.c funcoes.c)
