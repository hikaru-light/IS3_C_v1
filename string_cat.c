#include <stdio.h>
#include <stdlib.h>

char str1[];
char str2[];

void input(char *ptr, char *str1, char *str2) {
	while(*str1) {
		*ptr = *str1;
		ptr++; str1++;
	}
	while(*str2) {
		*ptr = *str2;
		ptr++; str2++;
	}
}

int main() {
	char *p; p = malloc(sizeof(char) * 10);
	char *a; a = malloc(sizeof(char) * 5);
	char *b; b = malloc(sizeof(char) * 5);

	scanf("%s", a);
	scanf("%s", b);
	input(p, a, b);

	printf("%s\n", p);
}

