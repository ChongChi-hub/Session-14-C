#include <stdio.h>
#include <string.h>
//'a' - 'A' = 32.
int main() {
    char str[] = "hello rikkei";
    for (int i = 0; i < strlen(str); i++) {
        if (i == 0 || (i > 0 && str[i - 1] == ' ')) { 
            if(str[i]>='a' && str[i] <= 'z')
                str[i] = str[i] - 32;    
        } else {
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] + 32;    
            }
        }
    }
    printf("Chuoi sau khi da in hoa chu cai dau: %s\n", str);

    return 0;
}


