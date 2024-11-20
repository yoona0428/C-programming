#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>


int main(void)
{
	int arr1[5];
	
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);
	
	StandardDeviation(arr1);
	return 0;
}
int StandardDeviation(double param[])
{
	double mean = 0, standard = 0;
	double a = 0, b = 0, c = 0;
	for (int i = 0; i < 5; i++)
		a += param[i];

	mean = a / 5;
	for (int i = 0; i < 5; i++)
	{
		b = (param[i] - mean) * (param[i] - mean);
		c += b;
	}
	standard = sprt(c / 5);
	printf("Standard Deviation = %.3lf \n", standard);
}
