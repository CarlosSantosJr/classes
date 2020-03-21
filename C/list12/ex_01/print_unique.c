#include <stdio.h>

void print_unique(int *array, int size) {
    int isUnique = 1;
    int number_before = 0;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (array[i] == array[j] && i != j) {
                isUnique = 0;
            }
        }
        if (isUnique == 1) {
            if (number_before == 1) {
                printf(",%d", array[i]);
            } else {
                printf("%d", array[i]);
                number_before = 1;
            }
        } else {
            isUnique = 1;
        }
    }
    printf("\n");
}