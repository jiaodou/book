#include <stdio.h>
int substr(char dst[], char src[], int start, int len) {
	int len_src = strlen(src);//len函数也就只能知道到非0的位置，并不能知道字符串数组是多大的
	int len_dst = sizeof(src);
	if (start < 0 || len <= 0) {
		len_dst = "";
		return 0;
	}
	int last = 0;
	if (start < len_src) {
		for (int i=0; i < len_dst && i < len && (start + i) < len_src;i++) {
			dst[i] = src[start + i];
			last = i;
		}
		dst[last+1] = 0;
	}
	else {
		len_dst = "";
		return 0;
	}
	return last;

}
int main6() {
	char dst[10];
	char src[10] = "helld ";
	substr(dst, src,2,4);
	return 1;
}