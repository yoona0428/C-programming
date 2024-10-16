#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result(int num)
{
	if (num == 0)
		return;
	int num1;
	num1 = num % 2;

	printf("%d", num1);
	result(num / 2);
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	result(num);
	return 0;
}