#include <stdio.h>
int main4() {
	char str[] = "abs\nooopplk\newewefddsgss\n";
	int *pstr = &str;
	int i=0;
	int lengh=0;
	int lengh_num=1;
	int num[10];
	int max_lengh = 0;
	int max_lengh_num = 1;
	while (str[i] != 0)
	{
		if (str[i] == '\n') {
			if (max_lengh < lengh) {
				max_lengh = lengh;
				max_lengh_num = lengh_num;
			}
			lengh=1;
			lengh_num++;
		}
		else {
			lengh++;
		}
		i++;
	}
	printf("max_lengh_num:%d,max_lengh:%d", max_lengh_num, max_lengh);
}