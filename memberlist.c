#include <stdio.h>
#include <string.h>

char *Data[100];
int dataIndex = 0;

int main() {
  char buffer[1024];

  while( 1 ) {
    scanf( "%s" , &buffer );
    if ( strcmp( "end" , buffer ) == 0 ) break;

    Data[dataIndex] = malloc(sizeof(buffer));
    strcpy(Data[dataIndex], &buffer);
    dataIndex++;
  }

  printf( "----\n" );

  for ( int i = 0 ; i < dataIndex ; i++ ) {
    printf( "%s\n" , Data[i] );
  }
}
