#include <stdio.h>

int arr[];
int i = 0;

main() {
	while(i<10) {
		arr[i] = i*i;
		i++;
	}

	i = 0;

	while(i<10) {
		printf("%d\n", arr[i]);
		i++;
	}
}

