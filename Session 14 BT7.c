#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloRikkei123@gmail.com";
    int number = 0;
    int letter = 0;
    int special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            letter++;
        } else if(str[i] >= '0' && str[i] <= '9'){
            number++;
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            letter++;
        } else{
            special++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So chu trong chuoi: %d\n", letter);
    printf("So chu so trong chuoi: %d\n", number);
    printf("So ki tu dac biet trong chuoi la: %d\n", special);

    return 0;
}


