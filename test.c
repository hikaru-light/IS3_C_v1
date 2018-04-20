#include <stdio.h>

int j;

int foo(int n) {
	return n-1;
}

main() {
	int i = 0;
	i = i + 10;

	char str[] = {'H', 'e', 'l', 'l', 'o', 0};
	char str2[] = "Hello";
	str[1] = 69;

	printf("%s %s\n", str, str2);
	printf("%d\n", str[0]);

	if(0) {
		printf("true\n");	
	} else {
		printf("false\n");
	}

	while(i) {
		printf("%d\n", i);
		i = foo(i);
	}
}

