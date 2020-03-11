#include <stdio.h>

int fib_it(int nbr) {
    int i = 0;
    int j = 1;
    int tmp;

    for(int k = 1; k < nbr; k++) {
        tmp = i + j;
        i = j;
        j = tmp;
    }

    return j;
}

int main() {
    printf("%d\n", fib_it(10));
}