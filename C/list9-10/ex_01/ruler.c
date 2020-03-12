#include "rubiks.h"
#include <stdlib.h>
#include <unistd.h>

void print_tab(int **tab) {
	char nbr;
	char *line = "-----------------";
	char between = '|';
	char lineBreak = '\n';
	char space = ' ';
	
    for(int i = 0; i < 4; i++) {
    	write(1, line, 17);
    	write(1, &lineBreak, 1);
    	
        for(int j = 0; j < 4; j++) {
			nbr = tab[i][j] + '0';
			write(1, &between, 1);
			write(1, &space, 1);
			write(1, &nbr, 1);
			write(1, &space, 1);
        }
		write(1, &between, 1);
		write(1, &lineBreak, 1);
    }
	write(1, line, 17);
	write(1, &lineBreak, 1);
	write(1, &lineBreak, 1);
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
