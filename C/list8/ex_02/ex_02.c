#include "struct.h"
#include <unistd.h>
#include <stdio.h> // Pode Apagar

void my_init(t_my_struct *my_struct) {
    my_struct->id = 0;
    my_struct->str = NULL;
}


int main() {
    // Declara a estruct e atribui o valor 10 para o campo id dela
    t_my_struct my_struct;
    my_struct.id = 10;

    printf("%d\n", my_struct.id);

    my_init(&my_struct);

    printf("%d\n", my_struct.id);
    printf("%p\n", my_struct.str);
}
