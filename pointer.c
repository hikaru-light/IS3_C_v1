#include <stdio.h>

int main() {
	int n = 100;
	int *p;

	p = &n;

	printf("%p\n", p);

	printf("%d\n", n);
	printf("%d\n", *p);
}

