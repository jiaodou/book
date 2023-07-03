#include <stdio.h>
int func(void) {
	static int counter = 1;
	return ++counter;
}

int func_2() {
	//float a = (float)(25 / 10);
	int answer;
	answer = func() - func() * func();
	printf("%d\n", answer);
}
int func_5() {
	//float a = (float)(25 / 10);
	int leap_year=0;
	int year = 1104;
	if (year % 100 != 0 && year % 4 == 0) {
		leap_year = 1;
	}
	printf("%d\n", leap_year);
}
int func_7() {
	int a = 20;
	if (1 <= a == 1)
		printf("In range\n");
	else
		printf("Out of range\n");
}
int mainq5() {
	int non_zero = 0;
	int array_size = 2;
	int arrays[2] = {-1,1};
	for (int i = 0; i < array_size; i += 1)
		non_zero += arrays[i];
	if(!non_zero)
		printf("all 0\n");
	else
	printf("not all 0\n");
}
int main2() {
	mainq5();
}
