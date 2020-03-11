#include <stdio.h>

int my_power_it(int nbr, int pw) {
    int result = 1;
    for(int i = 0; i < pw; i++) {
        result = result * nbr;
    }
    return result;
}

void main() {
    printf("%d\n", my_power_it(4, 12));
}