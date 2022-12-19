#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”
// 输入一行，只有一个整数x(0 <= x <= 10000)
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
		printf("请输入0至10000的数字!");
	}
	return 0;
}