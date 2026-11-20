#include <stdio.h>

int func2(int a, int b)
{
    return a - b;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d", func2(10, n));

    return 0;
}