#include <stdio.h>
int main() {
	long l = 1234567890;
	short s = l;//������ȡ��������ȡ��
	double d;//float �������ڴ�����ʲô���ӵģ�����ô��¼��ֵ��
	printf("%d",s);

	enum Liquid {
		OUNCE = 1,
		CUP = 8,
		PINT = 16,
		QUART = 32,
		GALLON = 128,
	};
	/*�����ˣ���֪��Ϊʲô
	enum Liquid jar;
	jar = QUART;
	printf("%s\n",jar);
	jar = jar+ PINT;
	printf("%s\n", jar);
	*/
	int const a;
}