#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello rikkei 123";
    int number = 0;
    int letter = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            letter++;
        }
        if(str[i] >= '0' && str[i] <= '9'){
            number++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So chu trong chuoi: %d\n", letter);
    printf("So chu so trong chuoi: %d\n", number);

    return 0;
}


