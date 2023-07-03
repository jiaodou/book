#include <stdio.h>
int test_fun() {
	char a[] = { 'a' };
	return a;
}
int find_max(int array_i[10]) {
	int i;
	int max = array_i[0];
	for (i = 1; i < 10; i += 1) {
		if (array_i[i] > max)
			max = array_i[i];
	}
}

int test_fun2() {
	int array_i[10] = { 11,2,3,4,5,6,10,7,8,9 };
	int res = find_max(array_i);
}
int hermite(int n, int x) {
	if (n <= 0) {
		return 1;
	}
	if (n == 1) {
		return 2 * x;
	}
	return 2 *x* hermite(n - 1, x) - 2 * (n - 1)*hermite(n - 2, x);
}
void fun1() {
	int res = hermite(3, 2);
}
int gcd(int m, int n) {
	if (m% n == 0) {
		return n;

	}
	else {
		return gcd(n,m % n);
	}
}
void fun2() {
	int res = gcd(63, 42);
}
void fun3() {//没搞懂什么意思
	
}
int max_list(int *list) {
	int i=0;
	int max= *list;
	int current = 0;
	while ((current  = *(list + ++i)) >0)
	{
		if (current > max) {
			max = current;
		}
	}
	return max;
}
void fun4() {
	int array_i[10] = { 11,2,3,4,5,6,10,7,80,-1 };
	int res = max_list(array_i);
}
int main() {
	fun4();
}