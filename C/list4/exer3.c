#include <stdio.h>

int my_putstr(char *a) {
	int i;

	for(i = 0; a[i] != '\0'; i++);

	return i;
}

int main() {
	char *str = "hello";

	 printf("%d", my_strlen("testando"));
	 return 0;
}



