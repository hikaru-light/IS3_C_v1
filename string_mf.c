#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[];

void dup(char *p, char *q) {
	while(*p) {
		*q = *p;
		
		p++; q++;
	}
	*q = 0;
}

int main() {
	while(scanf("%s", &str) != EOF) {
		char *p; p = &str;

		int len = strlen(str);

		char *q; q = malloc(sizeof(char)*len + 1);

		dup(p, q);

		printf("%s\n", q);

		free(q);
	}
}

