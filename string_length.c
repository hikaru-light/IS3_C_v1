#include <stdio.h>
char str[];

int main() {
	scanf("%s", str);
	char *p = str;
	int i = 0;

	while(*p != 0) {
		i++; p++;
	}

	printf("%d\n", i);
}

