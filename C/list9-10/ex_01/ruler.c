#include <stdlib.h>
#include <stdio.h>

void print_tab(int **tab) {
    for(int i = 0; i < 4; i++) {
        printf("-----------------\n");
        for(int j = 0; j < 4; j++) {
            printf("| %d ", tab[i][j]);
        }
        printf("|\n");
    }
    printf("-----------------\n");
}

int main() {
    int **tab = NULL;

    tab = (int **)malloc(4 * sizeof(int *));

    for(int i = 0; i < 4; i++) {
        tab[i] = (int *)malloc(4 * sizeof(int));
        for(int j = 0; j < 4; j++) {
            tab[i][j] = j;
        }
    }

    print_tab(tab);
}