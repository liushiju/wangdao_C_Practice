#include <stdio.h>

int main()
{
	int i = 5;
	float j = i / 2;   //输出是2还是2.5呢？
	float k = (float)i / 2; //输出的是2.5。(float)表达式本身变成浮点型
	printf("j=%f, k=%f\n", j, k);
	return 0;
}