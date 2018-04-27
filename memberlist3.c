#include <stdio.h>
#include <string.h>

char **data;
int indx = 0;

int main() {
	char buffer[1024];
	int temp;

	printf("Input size of data : ");
	scanf("%d", &temp);
	data = malloc(sizeof(char*) * temp);

	while(1) {
		scanf("%s", &buffer);
		if(strcmp("end", buffer) == 0) break;

		data[indx] = malloc(sizeof(buffer));
		strcpy(data[indx], &buffer);

		indx++;
	}
	
	printf("--------------\n");

	for(int i = 0; i < indx; i++) {
		printf("%s\n", data[i]);	
	}
}

