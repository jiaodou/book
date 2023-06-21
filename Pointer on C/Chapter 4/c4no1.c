#include <stdio.h>
#include <limits.h>

int main1() {
	int n = 1;
	scanf("%d", &n);
	float a = 1.0;
	for (int i = 0; i < 100; i++) {
		a = (a+n/a)/2;
		printf("res:%f \n",a);
	}
	printf("Hello, World! \n");
	return 0;
}