#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p; p = malloc(sizeof(int));

	scanf("%d", p);
	printf("%d\n", *p);

	free(p);
}

