#include <stdio.h>
char* find_char(char const* source, char const* chars) {
	char* pi = source;
	while (*pi!=0)
	{
		char* pj = &chars[-1];
		while(++*pj != '\0') {
			if (*pi == *pj) {
				return pi;
			}
			//pj++;
		}
		pi++;
	}
	return NULL;
}
void fun1() {
	char source[] = "ABCDEF";
	char chars[] = "XRCQEF";
	char s = *source;
	char* pi = source;
	*pi++;
	char* pj = pi;
	char c = *pj;
	char* res = find_char(source, chars);
}
int del_substr(char* str, char const* substr) {
	char* pstr = str;
	while (*pstr!=0)
	{
		if (*pstr == *substr) {
			char* pstr_back = pstr;
			while (*substr != 0) {
				if (*pstr != *substr) {
					return 0;
				}
				pstr++;
				substr++;
			}
			while (*pstr != 0) {
				*pstr_back = *pstr;//写入权限冲突
				pstr_back++;
				pstr++;
			}
			*pstr_back = 0;
			return 1;

		}
			pstr++;
	}
	return 0;
}

void fun2() {
	char str[] = "ABCDEFG";
	char const* substr = "CDEFGH";
	int res = del_substr(str, substr);
}
int fun_test() {
	char str[] = "ABCDEFG";
	str[0] = str[1];
}
void reverse_string2(char string[]) {
	int lengthi = sizeof(string);//失效了
	int length = 0;
	while (*(string + ++length) != 0);
	char** copy_string = &string;
	for (int i=0; i < length; i++) {
		*(string + i) = *(*copy_string + length - i-1);
	}
}
void fun_demo(char *string, char* reverse_string,char value) {
	if (*string != 0) {
		fun_demo(string + 1, reverse_string-1, *(string+1));
		*reverse_string = value;
		int a = 0;
	}
	return;

}
void reverse_string(char string[]) {//无法实现
	int lengthi = sizeof(string);//失效了
	int length = 0;
	while (*(string + ++length) != 0);
	char** copy_string = &string;
	for (int i = 0; i < length; i++) {
		*(string + i) = *(*copy_string + length - i - 1);
	}
}
void fun3() {
	char str[] = "ABCDEFG";
	int xxx = sizeof(str);
	//reverse_string(str);
	fun_demo(str, str+6,*str);
}
void fun4_back() {
	//coast int  length = 1000;报错
	int  length = 1000;
	int list[1000];
	for (int i = 0; i < 1000; i++) {
		if (i == 0) {
			*(list + i) = 1;
			continue;
		}
		else if (i == 1) {
			*(list + i) = 2;
			continue;
		}
		int value = i * 2 - 1;
		for (int j = 0; j < i; j++) {
			int old_value = *(list + j);
			if (old_value != 0 && old_value != 1) {
				if (value % old_value == 0) {
					value = 0;
					break;
				}
			}
		}


		*(list + i) = value;
		//list[i] = (i + 1) * 2 - 1;
	}

}
int* find_prime() {
	//coast int  length = 1000;报错
	int  length = 1000;
	int list[1000];
	for (int i = 1; i < length; i++) {
		int value = i;
		for (int j = 0; j < i; j++) {
			int old_value = *(list + j);
			if (old_value != 0 && old_value != 1) {
				if (value % old_value == 0) {
					value = 0;
					break;
				}
			}
		}


		*(list + i-1) = value;
		//list[i] = (i + 1) * 2 - 1;
	}
	int nums=0;
	for (int i = 0; i < 1000; i++) {
		if (list[i] != 0) {
			nums++;
		}
	}
	printf("%d ",nums);
	return list;

}

void fun4() {

	int* res = find_prime(1, 1000);//返回值不太对
}
void fun5() {
	//coast int  length = 1000;报错
	int  length = 10000;
	int list[10000];
	int nums = 0;
	for (int i = 1; i < length; i++) {
		int value = i;
		for (int j = 0; j < i; j++) {
			int old_value = *(list + j);
			if (old_value != 0 && old_value != 1) {
				if (value % old_value == 0) {
					value = 0;
					break;
				}
			}
		}
		*(list + i - 1) = value;
		if (value != 0) {

			nums++;
		}
		if (i % 1000 == 0) {

			printf("%d ", nums);
			nums = 0;
		}
	}
	printf("%d ", nums);
	return list;

}
int main() {
	fun3();
}