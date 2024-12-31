#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello rikkei";
    int check = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            check++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So tu trong chuoi: %d\n", check);

    return 0;
}


