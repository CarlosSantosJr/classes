/*
Write a function 'my_int', takin g a pointer to an integer as parameter. This function must not return anything
but the value of the variable passed in parameter must be set at 42.
*/

#include <stdio.h>

void my_init(int *i) {
	*i = 42;
}

int main() {
	int i = 0;

	my_init(&i);
	printf("%d", i);
}