#include <stdio.h>
#include <stdlib.h>

char str1[10] = "apple";
char str2[10] = "orange";

// char str1[];
// char str2[];

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
	//scanf("%s", &str1[0]);
	//scanf("%s", &str2[0]);

	char *a; a = &str1[0];
	char *b; b = &str2[0];

	char *p; p = malloc(sizeof(str1) + sizeof(str2));
	input(p, a, b);

	printf("%s\n", p);
}

