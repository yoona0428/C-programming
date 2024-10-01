#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 4; a++)
		printf(" ");
	printf("*");
	printf("\n");

	for (int b = 0; b < 3; b++)
		printf(" ");
	printf("***");
	printf("\n");

	for (int c = 0; c < 2; c++)
		printf(" ");
	printf("*****");
	printf("\n");

	for (int d = 0; d < 1; d++)
		printf(" ");
	printf("*******");
	printf("\n");

	printf("*********");
	printf("\n");
	return 0;
}
