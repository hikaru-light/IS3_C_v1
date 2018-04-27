#include <stdio.h>
#include <stdlib.h>

char str1[10];

void dup(char *p, char *q) {
	while(*p) {
		*q = *p;
		p++; q++;
	}
	*q = 0;
}

int main() {
	scanf("%s", &str1);
	char *p; p = &str1;

	char *q; q = malloc(sizeof(str1));

	dup(p, q);
	printf("%s\n", q);
}

