#include <stdio.h>
char str[];

void conv(char *p) {
	if(97 <= *p && *p <= 122) {
		*p -= 32;
	} else {
		*p += 32;
	}
}

int main() {
	scanf("%s", str);
	char *p = str;

	while(*p != 0) {
		conv(p); p++;
		printf("%s\n", str);
	}
}

