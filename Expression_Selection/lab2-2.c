#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    scanf("%d %c %d", &num1, &op, &num2);
    float num_1 = num1;
    float num_2 = num2;
    if (0 <= num1 && num2 <= 10000)
    {
        switch (op)
        {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("divided by zero error");
            }
            else
            {
                printf("%.2f", num_1 / num_2);
            }
            break;
        }
    }
}