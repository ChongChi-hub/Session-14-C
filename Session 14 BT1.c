#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, 10, stdin); 
    printf("Chuoi ban vua nhap la: %s\n", str);
    printf("Do dai chuoi ban vua nhap la: %ld", strlen(str));

    return 0;
}
