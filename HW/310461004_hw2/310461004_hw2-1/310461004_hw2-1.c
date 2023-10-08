#include <stdio.h>
int main()
{
    char input;
    scanf("%c", &input);
    int define_value = (int)input;
    if ('0' <= define_value && define_value <= '9')
    {
        printf("digit");
    }
    else if ('a' <= define_value && define_value <= 'z')
    {
        printf("lowercase letter");
    }
    else if ('A' <= define_value && define_value <= 'Z')
    {
        printf("uppercase letter");
    }
    else
    {
        printf("other");
    }
}