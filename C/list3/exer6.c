#include <unistd.h>

void my_putnbr_rec(int n) {
    char c;

    if (n > 10) {
        my_putnbr_rec(n / 10);
    }

    n %= 10;
    c = n + '0';
    write(1, &c, 1);
}

void my_putnbr(int n) {
    char c;

    if (n < 0) {
        char c = '-';
        write(1, &c, 1);
        n = n * (-1);
    }

    if (n > 10) {
        my_putnbr_rec(n / 10);
    }

    n %= 10;
    c = n + '0';
    write(1, &c, 1);

    c = '\n';
    write(1, &c, 1);
}
