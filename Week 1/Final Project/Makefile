CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = main.c input.c calculator.c globals.c
OBJ = $(SRC:.c=.o)

TARGET = Maining

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)