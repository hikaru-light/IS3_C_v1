#include <stdio.h>
char str[];

int main() {
	scanf("%s", str);

	char *p; p = &str;
	
	while(*p != 0) {
		if(97 <= *p && *p <= 122) {
			*p -= 32;
		} else {
			*p += 32;
		}
		
		printf("%s\n", str);
		p++;
	}
}
