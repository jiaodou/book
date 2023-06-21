#include <stdio.h>
void deblank(char string[]) {
	char dstr[100];
	char pre_c=0;
	int loopi=0;
	int len_str = strlen(string);
	for (int i=0; i < len_str; i++) {
		if (string[i] == ' ' && pre_c == ' ') {
			;
		}
		else {
			dstr[loopi] = string[i];
			loopi++;
		}
		pre_c = string[i];
	}
}
int main() {
	char string[] = "h  ello    w   2  ";
	char c = string[1];
	char a = ' ';
	if (c == a) {
		int a;
	}
	printf("%s\n", string);
	deblank(string);
	printf("%s\n", string);
}