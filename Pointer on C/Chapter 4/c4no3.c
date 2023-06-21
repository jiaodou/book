#include <stdio.h>
int main3(){
	int eq_num = 0;
	int side[6] = {0};
	for(int i=0; i < 3; i++)
	{
		printf("Iuput num:");
		//scanf("%d", (side + i));
		scanf("%d", &side[i]);

		side[i + 3] = side[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (side[i] + side[i+1] <= side[i+2] || side[i] - side[i + 1] >= side[i + 2]) {
			printf("this is not triangle");
			return 0;
		}
		if (side[i] == side[i + 1]) {
			eq_num++;
		}
	}
	switch (eq_num)
	{
	case 0:
		printf("this is normal triangle");
		break;
	case 1:
		printf("this is isosceles triangle");
		break;
	case 3:
		printf("this is equilateral triangle");
		break;
	default:
		break;
	}

}