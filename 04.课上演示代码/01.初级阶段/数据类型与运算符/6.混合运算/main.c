#include <stdio.h>

int main()
{
	int i = 5;
	float j = i / 2;   //�����2����2.5�أ�
	float k = (float)i / 2; //�������2.5��(float)���ʽ�����ɸ�����
	printf("j=%f, k=%f\n", j, k);
	return 0;
}