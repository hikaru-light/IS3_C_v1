#include <stdio.h>

void foo(int *i) {
	printf("%d\n", *i);

	*i += 200;
	printf("%d\n", *i);
}

int main() {
	int i = 100;
	int *p = &i;
	printf("%d\n", i);
	
	foo(p);
	printf("%d\n", i);
}

