#include <stdio.h>
int increment(int num);
int negate(int num);

int main2() {
	printf("%d\n", increment(10));
	printf("%d\n", negate(10));
	printf("%d\n", increment(0));
	printf("%d\n", negate(0));
	printf("%d\n", increment(-10));
	printf("%d\n", negate(-10));
	
	return 0;
}