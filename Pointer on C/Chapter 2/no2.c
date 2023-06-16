#include <stdio.h>

int main() {

	FILE* file = fopen("no5.c", "r");
	char ch;
	int brace=0;

	while ((ch = fgetc(file)) != EOF)
	{
		//printf("%c", ch);
		if (ch == '{') {
			brace++;
		}
		if (ch == '}') {

			brace--;
		}
		if (brace < 0) {
			printf("brace } is redundant \n");
		}
	}
	if (brace > 0) {
		printf("brace { is redundant \n");
	}
	if (brace == 0) {
		printf("brace is correct \n");
	}

	return 0;
}