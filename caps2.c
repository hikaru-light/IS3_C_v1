#include <stdio.h>

char str[];

int main() {
	scanf("%s", str);

	char *p; p = &str[0];

	while(*p != 0) {
		*p -= 32;
		printf("%s\n", str);

		p++;
	}
}

