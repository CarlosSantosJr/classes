#include <unistd.h>

char *my_strstr(char *haystack, char *needle) {
    int i = 0;
    int j = 0;
    int sequence = 0;

    while (haystack[j] != '\0') {
        if (needle[i] == '\0'){
            break;
        } else {
            if (needle[i] == haystack[j]) {
                sequence = 1;
                i++;
            } else {
                sequence = 0;
                i = 0;
            }
        }
        j++;
    }

    if (sequence == 1) {
        return needle;
    } else {
        return NULL;
    }
}