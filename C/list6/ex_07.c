#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_reset_ptr(char **str) {
	free(*str);
	*str = NULL;
}

int main(){
	char *str;

	str = strdup("Please, let me free!");
	my_reset_ptr(&str);
	printf("%p\n", str);
	return 0;
}
