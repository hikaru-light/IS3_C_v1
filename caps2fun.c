#include <stdio.h>
char str[];

void mag(char *p) {
	*p -= 32;
}

int main() {
	scanf("%s", str);
	char *p = str;
	
	while(*p != 0) {
		mag(p);
		p++;

		printf("%s\n", str);
	}
}

