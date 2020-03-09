#include <stdlib.h>
#include <stdio.h>

char *my_strcpy(char *destination, char *source) {
	int i;
	for(i = 0; source[i] != '\0'; i++) {
		destination[i] = source[i];
	}
	destination[i] = '\0';

	return destination;
}

int main(){
	char *str;
	char *str2;

	str = (char *)malloc(6*sizeof(char));
	str2 = (char *)malloc(6*sizeof(char));

	str2 = my_strcpy(str, "teste");

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
}

