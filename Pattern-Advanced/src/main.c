#include <stdio.h>
#include "math.h"
#include "gpio.h"

int main() {
    printf("Sum: %d\n", add(2,3));
    gpio_init();
    return 0;
}