#include "struct.h"
#include "abs.h"
#include <unistd.h>
#include<string.h>
#include <stdio.h> // Pode Apagar

void my_init(t_my_struct *my_struct, int id, const char *str) {
    my_struct->id = MY_ABS(id);
    my_struct->str = strdup(str);
}


int main() {
    // Declara a estruct e atribui o valor 10 para o campo id dela
    t_my_struct my_struct;
    const char *str = "TESTING";

    my_init(&my_struct, 10, str);

    printf("%d\n", my_struct.id);
    printf("%s\n", my_struct.str);
}
