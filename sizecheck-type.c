#include <stdio.h>

main() {
	int n = 1000;

	int *p; p = &n;

	printf( "int:    %d\n" , sizeof( int ) );
	printf( "char:   %d\n" , sizeof( char ) );
	printf( "double: %d\n" , sizeof( double ) );
	printf( "float:  %d\n" , sizeof( float ) );

	printf( "p: %d\n", *p);
}

