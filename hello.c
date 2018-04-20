#include <stdio.h>

char str[];

main() {
	printf("Please enter your name.\n");

	scanf("%s", str);

	printf("Hello, %s!\n", str);
}

