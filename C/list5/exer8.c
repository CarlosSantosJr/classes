#include <unistd.h>

int my_putnbr_base(int nbr, char *base)
{
    char c;
    int base_size;

    for (base_size = 0; base[base_size] != '\0'; base_size++);

    if (nbr < 0)
    {
        nbr = nbr * -1;
        c = '-';
        write(1, &c, 1);
    }

    if (nbr == 0) {
        return (0);
    }
    else {
        my_putnbr_base(nbr / base_size, base);
        write(1, &base[nbr % base_size], 1);
    }
    
    return (0);
}
