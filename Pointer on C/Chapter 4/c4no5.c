#include <stdio.h>
int main5() {

	FILE* file = fopen("c4no5.txt", "r");
	char print_sentence[200] = { 0 };
	char pre_sentence[200] = { 0 };
	char sentence[200] = { 0 };

	while (fgets(sentence, 200, file) != NULL) {

		if (strcmp(sentence, pre_sentence)==0) {
			if (strcmp(sentence, print_sentence) != 0) {
				printf("%s", sentence);
				strcpy(print_sentence, sentence);
			}
		}
		strcpy(pre_sentence, sentence);
	}

}