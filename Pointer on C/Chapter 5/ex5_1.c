#include <stdio.h>
int count_one_bits(unsigned value) {
	int ones;
	for (ones = 0; value != 0; value = value >> 1) {
		if (value % 2 != 0) {
			ones = ones + 1;
		}
	}
	return ones;
}
int main_e1() {
	int ones = count_one_bits(128);
	printf("%d\n", ones);
}
