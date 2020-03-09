#include <stdio.h>
#include <unistd.h>

void my_show_str(char **tab) {
	char newLine = '\n';
	for(int i = 0; tab[i] != NULL; i++) {
		for(int j = 0; tab[i][j] != '\0'; j++){
			write(1, &(tab[i][j]), 1);
		}
		write(1, &newLine, 1);
	}
}

int main() {
	char *tab[] = {
		"Hello",
		"Students",
		NULL
	};

	my_show_str(tab);
	return 0;
}
