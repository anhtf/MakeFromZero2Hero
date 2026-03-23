/*

- main.c (Preprocess)--> main.i (Compile)--> main.s (Assemble)--> main.o (Link)--> main (executable)
- gcc -E main.c > main.i   (PREPROCESS(#include bị expand; macro được thay thế))
- gcc -S main.c            (COMPILE → ASM) 
- gcc -c main.c            ASSEMBLE → OBJECT
- gcc main.o math.o -o app LINK → EXECUTABLE

- objdump -d main.o        Xem assembly

- Static/Dynamic:
 + gcc main.o math.o -o app
 + gcc -shared -fPIC math.c -o libmath.so --> gcc main.c -L. -lmath -o app
*/

/*
1. Compiler KHÔNG link
.o chỉ là piece
2. Linker resolve symbol
U → phải tìm thấy
3. Makefile = automate process này
*/

// main.c
#include <stdio.h>

int add(int a, int b);

int main() {
    printf("Result: %d\n", add(2, 3));
    return 0;
}