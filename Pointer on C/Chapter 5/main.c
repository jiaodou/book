#include <stdio.h>
int fun2() {
	char a = 'A';
	a += 13;
	printf("%c\n", a);//打印是乱码
}
unsigned int reverse_bits(unsigned int value)//32位和64位有啥区别
{

}

void printbit(unsigned int value) {
	int i = 0;

	while (i < 32)
	{
		int o = 0;
		if (value & 1 << 31-i) {
			o = 1;
		}
		printf("%d", o);
		i++;
	}
	printf("\n");
}

void reversebit(unsigned int value) {
	int i = 0;

	unsigned int res = 0;
	while (i < 32)
	{
		int o = 0;

		if (value & 1 << i) {
			res = res | (1 << 31-i);
		}
		i++;
	}
	printbit(value);
	printbit(res);
}
void fun3() {
	unsigned int value = 25;
	int i = 0;
	reversebit(value);
}
void set_bit(char bit_array[],unsigned bit_number) {
}
void chear_bit(char bit_array[], unsigned bit_number) {
}
void assign_bit(char bit_array[], unsigned bit_number,int value) {
}
void test_bit(char bit_array[], unsigned bit_number) {
}
void fun4() {
	;//没搞懂这题是什么意思
}
void fun5() {
	unsigned mask = 0;
	int i = 0;
	while (i < 32) {

		if (i <=13 && i>=9) {
			mask = mask | (1 << i);
		}
		i ++ ;
	}
	mask = ~mask & 0xffff;
	unsigned int  src = 0x123;
	unsigned int  res;
	res = src << 9;
	printbit(res);
	printbit(mask);
	res = res & mask;
	printbit(res);



}

void fun_test() {
	int a = -200; 
	
	a = a >> 2;
	printbit(a);
	printbit(a >> 2);
	printbit(a << 1);
}

int main() {
	printbit(0xffff);
	printbit(0x123);
	printbit(0xc7ff);
}