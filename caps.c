#include <stdio.h>

int main() {
	char str[8] = "abcdefg";

	char *p; p = &str[0];
	//char *p = str;

	*p = 'A';
	p++;

	*p = 'B';
	p++;

	*p = 'C';
	p++;

	*p = 'D';
	p++;

	*p = 'E';
	p++;

	*p = 'F';
	p++;

	*p = 'G';
	p++;

	printf("%s\n", str);
}
