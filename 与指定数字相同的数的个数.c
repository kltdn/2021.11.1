#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int N, m, i, k = 0;
    int n[100];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &n[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < N; i++)
    {
        if (n[i] == m)
            k++;
    }
    printf("%d", k);
    return 0;
}
