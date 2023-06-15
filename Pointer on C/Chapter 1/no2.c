#include <stdio.h>
#define MAX_INPUT 1000

int main2() {
	int max = 1000;
	int line = 0;
	while (1) {
		line += 1;
		char input[MAX_INPUT];
		printf("Input:");
		scanf("%s", input);
		printf("line:%d,value:%s \n", line, input);
	}
	return 0;
}