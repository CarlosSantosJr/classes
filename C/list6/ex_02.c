#include <stdio.h>

void my_show_address(int *nbr) {
	printf("%p\n", nbr);
}

int main(){
	int number = 20;
	my_show_address(&number);
}
