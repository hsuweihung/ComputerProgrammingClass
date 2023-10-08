#include <stdio.h>
int main()
{
    int banana, monkey;
    scanf("%d %d", &banana, &monkey);
    if (1 <= banana && banana <= 200 && 2 <= monkey && monkey <= 50)
    {
        int monkey_8 = banana / 8;
        if (monkey_8 > monkey)
        {
            printf("%d", monkey - 1);
        }
        else if (monkey_8 == monkey)
        {
            printf("%d", monkey);
        }
        else if (monkey_8 < monkey)
        {
            int left = monkey - monkey_8;
            while (banana - (monkey_8 * 8) < left)
            {
                monkey_8--;
            }
            printf("%d", monkey_8);
        }
        else
        {
            printf("monkeys QQ");
        }
    }
}