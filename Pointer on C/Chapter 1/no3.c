#include <stdio.h>
#define MAX_INPUT 100

int main() {
	signed char checksum = - 1 ;
	char input[MAX_INPUT];
	printf("Input:");
	scanf("%s", input);
	int num = 0;
	while (input[num]!= '\0') {
		checksum += input[num];
		num += 1;
	}
	checksum += '\n';
	printf("checksum:%d,value:%s \n", checksum, input);
	return 0;
}