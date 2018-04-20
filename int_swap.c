#include <stdio.h>

void swap(int *p, int *q) {
	int temp = *q;

	*q = *p;
	*p = temp;
}

int main() {
	int i = 100;
	int *p = &i;

	int j = 200;
	int *q = &j;

	swap(p, q);

	printf("%d %d\n", i,j);
}

