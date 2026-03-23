#target: dependencies
#    command

# compile lại TẤT CẢ (không tối ưu)
# all:
# 	gcc main.c math.c -o app

# Makefile chuẩn
# app: main.o math.o
# 	gcc main.o math.o -o app

# main.o: main.c
# 	gcc -c main.c

# math.o: math.c
# 	gcc -c math.c

#Variables
# CC = gcc

# app: main.o math.o
# 	$(CC) main.o math.o -o app

#Best
CC = gcc
CFLAGS = -Wall -g

app: main.o math.o
	$(CC) main.o math.o -o app

main.o: main.c math.h
	$(CC) $(CFLAGS) -c main.c

math.o: math.c math.h
	$(CC) $(CFLAGS) -c math.c

.PHONY: clean
clean:
	rm -f *.o app

#Make không tự biết header dependency

