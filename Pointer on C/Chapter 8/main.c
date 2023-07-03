#include <stdio.h>
void fun1() {

}//Ã»¿´¶®
float single_tax(float income) {
	if (income < 23350.0) {
		return income * 0.15;
	}
	else if(income < 56550.0) {
		return 3502.5 + (income-23350.0) * 0.28;
	}
	else if (income < 117950.0) {
		return 12798.5+(income - 56550.0) * 0.31;
	}
	else if (income < 256500.0) {
		return 318320.5 + (income - 117950.0) * 0.36;
	}
	else {
		return 81710.5 + (income - 256500.0) * 0.396;
	}
}
void fun2() {
	float res = single_tax(31000);
}
int identity_matrix(int list[][10]) {

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			if (i == j) {
				if (list[i][j] == 0) {
					return 0;
				}
			}
			else {
				if (list[i][j] == 1) {
					return 0;
				}

			}
		}
	}
	return 1;
}
void fun3() {
	int list[][10] = {
		1,0,0,0,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,0,0,
		0,0,1,0,0,0,0,0,0,0,
		0,0,0,1,0,0,0,0,0,0,
		0,0,0,0,1,0,0,0,0,0,
		0,0,0,0,0,1,0,0,0,0,
		0,0,0,0,0,0,1,0,0,0,
		0,0,0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,1,0,
		0,0,0,0,0,0,0,0,0,0,
	};
	int res = identity_matrix(list);
}

int main() {
	fun3();
}