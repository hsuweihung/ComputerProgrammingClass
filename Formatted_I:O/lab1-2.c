#include <stdio.h>
int main()
{
    int num1, num2, sum, minus, multiply, quo, remain;
    float quo_1;
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    minus = num1 - num2;
    multiply = num1 * num2;
    quo = num1 / num2;
    quo_1 = (float)num1 / num2;
    remain = num1 % num2;
    printf("num1=%d, num2=%d in decimal\n", num1, num2);     // 10進位表示
    printf("num1=%o, num2=%o in octal\n", num1, num2);       // 8進位表示
    printf("num1=%x, num2=%x in hexadecimal\n", num1, num2); // 16進位表示
    printf("(%d)+(%d)=%d\n", num1, num2, sum);
    printf("(%d)-(%d)=%d\n", num1, num2, minus);
    printf("(%d)*(%d)=%d\n", num1, num2, multiply);
    printf("(%d)/(%d)=%d\n", num1, num2, quo);
    printf("(%d)%%(%d)=%d\n", num1, num2, remain);
    printf("(%d)/(%d)=%.2f\n", num1, num2, (float)quo_1);
    printf("(%d)/(%d)=%.2e in scientific notation", num1, num2, (float)quo_1);
}
