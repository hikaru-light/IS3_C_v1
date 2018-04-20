#include <stdio.h>

void foo(int i) {
	printf("%d\n", i);

	i += 200;
	printf("%d\n", i);
}

int main() {
	int i = 100;
	printf("%d\n", i);
	
	foo(i);
	printf("%d\n", i);
}

