#define _CRT_SECURE_NO_WARNINGS //一定要放到最前面，解决scanf编译报错
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a); //一定要在变量前加入&符号
	printf("a=%d\n", a);
	return 0;
}