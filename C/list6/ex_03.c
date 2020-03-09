#include <stdio.h>
#include <stdlib.h>

int *my_up(int nbr) {
	int *array = (int *)malloc(2*sizeof(int));

	array[0] = nbr;
	array[1] = nbr * 2;

	return array;
}

int main() {
	int *array = my_up(4);
	printf("%d\n", array[0]);
	printf("%d\n", array[1]);
}
