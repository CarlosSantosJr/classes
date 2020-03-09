#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char *str) {
	char *tmp = (char *)malloc(sizeof(str));
	
	for(int i = 0; str[i] != '\0'; i++) {
		tmp[i] = str[i];
	}
	return tmp;
}

int main() {
	char *str = (char *)malloc(6*sizeof(char));
	str = "teste";
	printf("%s - old: %p\n", str, str);
	str = my_strdup(str);
	printf("%s - new: %p\n", str, str);
}
