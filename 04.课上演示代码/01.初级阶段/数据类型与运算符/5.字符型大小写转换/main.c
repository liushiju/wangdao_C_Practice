#include <stdio.h>

int main()
{
	char c = 'a'; //将小写字母a，要变成大写字母A
	c = c - 32;
	printf("字符a的大写是: %c\n", c);  //以字符形式来输出c
	return 0;
}