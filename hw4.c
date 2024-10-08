#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num == 2 || num == 3 || num == 5 || num == 7)
        printf("It is a prime number. \n");
    else if (num == 1 || num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
        printf("It is not a prime number. \n");
    else
        printf("It is a prime number. \n");
    return 0;
} 