#include <stdio.h>
int main()
{
    int input_number;
    int sum = 0;
    int result_2 = 0;
    while (scanf("%d", &input_number) != EOF)
    {
        if (1 <= input_number && input_number <= 10 ^ 6)
        {
            for (int i = 1; i < input_number; i++)
            {
                int result = input_number % i;
                if (result == 0)
                {
                    sum += i;
                }
            }
            if (sum == input_number)
            {
                sum = 0;
                printf("%d is a perfect number.\n", input_number);
            }
            else
            {
                int sum_2 = 0;
                for (int j = 1; j < sum; j++)
                {
                    result_2 = sum % j;
                    if (result_2 == 0)
                    {
                        sum_2 += j;
                    }
                }
                if (sum_2 == input_number)
                {
                    printf("%d's amicable number is %d.\n", input_number, sum);
                }
                else
                {
                    printf("%d is not a perfect number and does not have amicable number.\n",
                           input_number);
                }
                sum = 0;
                sum_2 = 0;
            }
        }
    }
}
