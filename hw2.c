#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double km;
	double mile = 1.609;
	double result;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	result = km / mile;
	printf("%.1f km is equal to %.1f miles. \n", km, result);
	return 0;
}
