#include <stdio.h>
#include <stdlib.h>

int main() {
	char *p; p = malloc((sizeof(char))*10);
	scanf("%s", p);

	char str[10];
	char *q = str;

	while(*p) {
		*q = *p;
		p++; q++;
	}
	*q = 0;

	printf("%s\n", str);
}

