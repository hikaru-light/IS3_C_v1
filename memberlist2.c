#include <stdio.h>
#include <string.h>

char *Data[100];
int dataIndex = 0;
char buff[1024];

int main() {
	while(1) {
		scanf("%s", &buff);
		
		if(strcmp("end", buff) == 0) break;

		Data[dataIndex] = malloc(sizeof(buff));
		strcpy(Data[dataIndex], buff);
		
		dataIndex++;
	}

	for(int i = 0; i < dataIndex; i++) {
		printf("%s\n", Data[i]);
	}
}
