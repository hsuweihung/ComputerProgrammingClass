#include <stdio.h>
#include <limits.h>

int main()
{
    long long int num1, num2;
    char op;

    while (scanf("%lld %lld %c", &num1, &num2, &op) != EOF)
    {
        if (op == '+')
        {
            if (num2 > 0 && num1 > LLONG_MAX - num2)
            {
                // Add operation will overflow long long int
                printf("Using the data type \"unsigned long int\" can complete this arithmetic operation\n");
                continue;
            }
        }
        else if (op == '-')
        {
            if (num2 > 0 && num1 < LLONG_MIN + num2)
            {
                // Subtract operation will overflow long long int
                printf("This arithmetic operation will overflow.\n");
                continue;
            }
        }

        long long int result = (op == '+') ? num1 + num2 : num1 - num2;

        if (result >= CHAR_MIN && result <= CHAR_MAX)
        {
            printf("Using the data type \"char\" can complete this arithmetic operation\n");
        }
        else if (result >= 0 && result <= UCHAR_MAX)
        {
            printf("Using the data type \"unsigned char\" can complete this arithmetic operation\n");
        }
        else if (result >= SHRT_MIN && result <= SHRT_MAX)
        {
            printf("Using the data type \"short int\" can complete this arithmetic operation\n");
        }
        else if (result >= 0 && result <= USHRT_MAX)
        {
            printf("Using the data type \"unsigned short int\" can complete this arithmetic operation\n");
        }
        else if (result >= INT_MIN && result <= INT_MAX)
        {
            printf("Using the data type \"int\" can complete this arithmetic operation\n");
        }
        else if (result >= 0 && result <= UINT_MAX)
        {
            printf("Using the data type \"unsigned int\" can complete this arithmetic operation\n");
        }
        else if (result >= LONG_MIN && result <= LONG_MAX)
        {
            printf("Using the data type \"Long int\" can complete this arithmetic operation\n");
        }
        else if (result >= 0 && result <= ULONG_MAX)
        {
            printf("Using the data type \"unsigned long int\" can complete this arithmetic operation\n");
        }
        else
        {
            printf("This arithmetic operation will overflow.\n");
        }
    }
}