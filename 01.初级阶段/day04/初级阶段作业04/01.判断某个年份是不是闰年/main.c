#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ж�ĳ������ǲ������꣬��������꣬�������yes���������������no��
// ����һ�У�ֻ��һ������x(0 <= x <= 10000)
int main() {
	int year;
	scanf("%d", &year);
	if (0 <= year && year <= 10000) {
		if (year%400==0||(year%4==0&&year%100!=0))
		{
			printf("yes\n");
		}
		else {
			printf("no");
		}
	}
	else
	{
		printf("������0��10000������!");
	}
	return 0;
}