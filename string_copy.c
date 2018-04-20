#include <stdio.h>

void string_copy(char *p, char *q) {
	int i = 10;

	while(i) {
		*q = *p;
		p++; q++; i--;
	}
}

int main() {
	char str1[10] = "apple";
	char *p = str1;

	char str2[10] = "orange";
	char *q = str2;

	string_copy(p, q);
	
	printf("%s\n", str2);
}

