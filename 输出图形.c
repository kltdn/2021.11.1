#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k;
	scanf("%d", &j);
	for (i = 0; i < j; i++)
		printf("*");
	for (i = 0; i < j - 2; i++)
	{
		printf("\n*");
		for (k = 0; k < j - 2; k++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < j; i++)
		printf("*");
}
