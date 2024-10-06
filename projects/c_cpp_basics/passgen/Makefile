# Nome do executável 
TARGET = passgen 
 
# Arquivos fonte 
SRCS = passgen.c helpers.c 
 
# Arquivos objeto 
OBJS = $(SRCS:.c=.o)
 
# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
 
# Regras de compilação
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
