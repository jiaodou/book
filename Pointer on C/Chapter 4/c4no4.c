#include <stdio.h>
void copy_n(char* dst, char* src, int n);
void copy_n2(char dst[], char src[], int n);
int main4() {
	char dst[10] = { '\0' };
	char src[12] = "hello world";
	printf("%s\n", src);
	int len = strlen(src);
	copy_n2(dst, src,10);
	printf("%s", dst);
}
void copy_n(char *dst, char *src, int n) {           //如何知道数组已经过界？
	int len = strlen(src);
	for (int i = 0; i < n; i++) {
		if (i >= len) {
			dst[i] = '\0';
		}
		else {
			dst[i] = src[i];
		}
	}
}
void copy_n2(char dst[], char src[], int n) {           //如何知道数组已经过界？
	int len = strlen(src);
	for (int i = 0; i < n; i++) {
		if (i >= len) {
			dst[i] = '\0';
		}
		else {
			dst[i] = src[i];
		}
	}
}