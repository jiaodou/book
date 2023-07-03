#include <stdio.h>
int main() {
	char* p = "abcded";
	char pp[] = "abcded";
	int xxx = sizeof(p);
	int xxxx = sizeof(pp);
	p[1];
	long l = 1234567890;
	short s = l;//是向上取还是向下取？
	double d;//float 类型在内存中是什么样子的，是怎么记录数值的
	printf("%d",s);

	enum Liquid {
		OUNCE = 1,
		CUP = 8,
		PINT = 16,
		QUART = 32,
		GALLON = 128,
	};
	/*
	enum Liquid jar;
	jar = QUART;
	printf("%s\n",jar);
	jar = jar+ PINT;
	printf("%s\n", jar);
	int const a;
	*/
}