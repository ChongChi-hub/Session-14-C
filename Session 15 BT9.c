#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "hello world";
	char c;
	printf("Nhap vao 1 ky tu: ");
	scanf("%c", &c);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == c) {
			for (int j = i; j < len; j++) {
				str[j] = str[j + 1];
			}
			len--;
			i--;
		}
	}
	printf("Chuoi sau khi xoa: %s\n", str);

	return 0;
}
