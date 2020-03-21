
int my_strcmp(char *str1, char *str2) {
    int difference = 0;
    int count = 0;

    while (((str1[count] == str2[count]) && (str1[count] != '\0') && (str2[count] != '\0'))) {
        count++;
    }

    difference = str1[count] - str2[count];
    return difference;
}

int main() {
    return 0;
}
