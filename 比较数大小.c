#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, max, min, a[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 1; i < 5; i++)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("最大值为%d\n最小值为%d", max, min);
}