#include <stdio.h>

int main() {
	        char s[10];
		int *p;

		s[0] = 'x';
		s[1] = 'y';
		s[2] = 'z';
		s[3] = 'q';
		s[4] = 'w';
		s[5] = 'e';
		s[6] = 'r';
		s[7] = 't';
		s[8] = 'y';
		s[9] = 0;

		printf( "%s\n" , s );

		p = &( s[0] );
		*p = 'A';
		p++;
		*p = 'B';
		p++;
		*p = 'C';
		printf( "%s\n" , s );
}

