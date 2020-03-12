#include "rubiks.h"
#include <stdlib.h>
#include <unistd.h>

#define PRINT_SQUARE_DEBUG_ 1

void algo_line(int **tab, int line) {
	int tmp = tab[line][0];

	for(int i = 0; i < 3; i++) {
		tab[line][i] = tab[line][i + 1]; 
	}
	tab[line][3] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		char *message = "Rotate Left Line ";
		char l = line + '0';
		char lineBreak = '\n';
		char point = '.';

		write(1, message, 17);
		write(1, &l, 1);
		write(1, &point, 1);
		write(1, &lineBreak, 1);
		
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
		char *message = "Rotate Top Column ";
		char l = column + '0';
		char lineBreak = '\n';
		char point = '.';

		write(1, message, 18);
		write(1, &l, 1);
		write(1, &point, 1);
		write(1, &lineBreak, 1);

		print_tab(tab);
	}
}

void algo_square(int **tab, int square) {
	int tmp;

	tmp = tab[square][square];

	tab[square][square] = tab[square + 1][square];	
	tab[square + 1][square] = tab[square + 1][square + 1];	
	tab[square + 1][square + 1] = tab[square][square + 1];	
	tab[square][square + 1] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		char *message = "Rotate Clockwise square ";
		char l = square + '0';
		char lineBreak = '\n';
		char point = '.';

		write(1, message, 24);
		write(1, &l, 1);
		write(1, &point, 1);
		write(1, &lineBreak, 1);
		
		print_tab(tab);
	}
}

void algo_line_reverse(int **tab, int line) {
	int tmp = tab[line][3];

	for(int i = 3; i > 0; i--) {
		tab[line][i] = tab[line][i - 1]; 
	}
	tab[line][0] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		char *message = "Rotate Right Line ";
		char l = line + '0';
		char lineBreak = '\n';
		char point = '.';

		write(1, message, 18);
		write(1, &l, 1);
		write(1, &point, 1);
		write(1, &lineBreak, 1);
		
		print_tab(tab);	
	}
}

void algo_column_reverse(int **tab, int column) {
	int tmp = tab[3][column];

	for(int i = 3; i > 0; i--) {
		tab[i][column] = tab[i - 1][column];
	}
	tab[0][column] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		char *message = "Rotate Down Column ";
		char l = column + '0';
		char lineBreak = '\n';
		char point = '.';

		write(1, message, 19);
		write(1, &l, 1);
		write(1, &point, 1);
		write(1, &lineBreak, 1);

		print_tab(tab);
	}
}

void algo_square_reverse(int **tab, int square) {
	int tmp;

	tmp = tab[square + 1][square];

	tab[square + 1][square] = tab[square][square];	
	tab[square][square] = tab[square + 1][square];	
	tab[square][square + 1] = tab[square + 1][square + 1];	
	tab[square + 1][square + 1] = tmp;

	if(PRINT_SQUARE_DEBUG_) {
		char *message = "Rotate Counter Clockwise square ";
		char l = square + '0';
		char lineBreak = '\n';
		char point = '.';

		write(1, message, 33);
		write(1, &l, 1);
		write(1, &point, 1);
		write(1, &lineBreak, 1);

		print_tab(tab);
	}
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
	algo_square(table, 0);
	algo_square_reverse(table, 0);
	algo_column_reverse(table, 0);
	algo_line_reverse(table, 0);
	
	return 0;
}
