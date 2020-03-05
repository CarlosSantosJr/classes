/*
Write a function 'my_swap', taking two pointers to an integer as parameters. This function must not return
anything but the value of the two variables passed in parameter must be swapped.
*/


#include <stdio.h>

void my_swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main() {
	int nb1 = 42;
	int nb2 = 21;
	
	printf("%d - %d\n", nb1, nb2);
	my_swap(&nb1, &nb2);
	printf("%d - %d\n", nb1, nb2);
	return (0);
}