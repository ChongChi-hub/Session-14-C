#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="Hello,Rikkei";
    printf("Chuoi ban dau la: %s\n", str);
    printf("Cac ky tu trong chuoi:\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
