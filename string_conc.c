#include <stdio.h>
char str1[];
char str2[];
char str3[10];

int main() {
	scanf("%s", str1);
	char *p = str1;

	char *r = str3;
	// int i = 0;

	while(*p != 0) {
		*r = *p;
		p++; r++;
	}

	scanf("%s", str2);
	char *q = str2;

	while(*q != 0) {
		*r  = *q;
		q++; r++;
	}

	*r = 0;
	printf("%s\n", str3);
}

