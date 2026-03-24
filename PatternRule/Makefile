CC = gcc
CFLAGS = -Wall -g

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

TARGET = app

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)