#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Description
��ȡһ��65��122֮�����������Ȼ�����ַ���ʽ������������ȡ��97������ַ�a

Input
��ȡһ���������������� ���ڵ���65��С�ڵ���122

Output
��������� ��ASCII���ж�Ӧ���ַ�
*/
int main() {
	int num;
	scanf("%d", &num);
	if (65 <= num && num <= 122) {
		printf("%c\n", num);
	}
	else
	{
		printf("error");
	}
}