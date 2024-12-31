#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, Rikkei";
    char ch;
    int check = 0;
    
    int length = strlen(str);
    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap mot ki tu: ");
    scanf("%c", &ch);
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            check++;
        }
    }
    printf("Ki tu '%c' xuat hien %d lan trong chuoi.\n", ch, check);

    return 0;
}


