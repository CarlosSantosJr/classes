#include "rubiks.h"
#include <stdlib.h>
#include <stdio.h>

#define PRINT_SQUARE_DEBUG_ 1

void algo_line(int **tab, int line) {
	int tmp = tab[line][0];

	for(int i = 0; i < 3; i++) {
		tab[line][i] = tab[line][i + 1]; 
	}
	tab[line][3] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		printf("Rotate Left Line %d.\n", line);
		print_tab(tab);	
	}
}

void algo_column(int **tab, int column) {
	int tmp = tab[0][column];

	for(int i = 0; i < 3; i++) {
		tab[i][column] = tab[i + 1][column];
	}
	tab[3][column] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		printf("Rotate Top Column %d.\n", column);
		print_tab(tab);
	}
}

void algo_square(int **tab, int square) {
	
}
int main() {
	int **table = (int **)malloc(4 * sizeof(int *));
	for(int i = 0; i < 4; i++) {
		table[i] = (int *)malloc(4 * sizeof(int));
		for(int j = 0; j < 4; j++) {
			table[i][j] = j;
		}
	}

	algo_line(table, 0);
	algo_column(table, 0);


	return 0;
}
