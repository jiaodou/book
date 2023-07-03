#include <stdio.h>
size_t strlen(char* string) 
{
	int length = 0;
	while (*string++ != '\0')
	{
		length += 1;
	}
	return length;
}
int fun() {
	int list[10] = {1,2,3,4};
	int list2[10] = { 11,21,31,41 };
	int list3[10] = { 12,22,32,42 };
	int list4[10] = { 0};
	int* plist[] = { list ,list2 ,list3,list4 };
	int** pp;
	pp = plist;
	int a = **plist;
	int b = *(*plist);
	while (*pp !=0)
	{
		int mm = 1;
		while (**pp != 0) {
			if (**pp++ == 32) {
				printf("find");
			}
		}
		pp++;
	}
}
int main3() {
	int arrayy_size = 10;
	int array[10] = {1,1,1,1,1};
	int* pi;
	for (pi = &array[0]; pi < &array[10];)
		*++pi = 0;
}