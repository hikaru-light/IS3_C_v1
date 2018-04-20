#include <stdio.h>

main() {
	int l = 10;
	int *p; p = &l;

	char m = 'a';
	char *q; q = &m;

	float n = 10.0;
	float *r; r = &n;

	printf("%p\n", p);
	printf("%p\n", q);
	printf("%p\n", r);
}

