#include <stdio.h>
int main()
{
	int i, s, A, B, a, b;
	for (a = 0, b = 0, i = 1; i <= 1000; i++)
	{
		for (s = i, A = 0, B = 0; s >= 1; s = s / 2)
		{
			s % 2 == 0 ? A++ : B++;
		}
		A >= B ? a++ : b++;
	}
	printf("%d %d", a, b);
}