#include <stdio.h>

void reverse(int n, int *ans)
{
    int reversed = 0;
    int minus = 0;

    if (n < 0)
    {
        minus = 1;
        n = -n;
    }

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (minus == 1)
    {
        reversed = -reversed;
    }

    *ans = reversed;
}

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    reverse(n, &ans);
    printf("%d", ans);
    return 0;
}