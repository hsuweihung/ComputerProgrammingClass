#include <stdio.h>
int main()
{
    int height_cm, weight;
    scanf("%d %d", &height_cm, &weight);
    if (1 <= height_cm && weight <= 300)
    {
        float height_m = height_cm / 100.0;
        float BMI = weight / (height_m * height_m);
        if (BMI < 18.5)
        {
            printf("BMI=%.2f, Underweight", BMI);
        }
        else if (18.5 <= BMI && BMI < 25)
        {
            printf("BMI=%.2f, Normal weight", BMI);
        }
        else if (25.0 <= BMI && BMI < 30)
        {
            printf("BMI=%.2f, Overweight", BMI);
        }
        else if (30.0 <= BMI && BMI < 35)
        {
            printf("BMI=%.2f, Obese (class I)", BMI);
        }
        else if (35.0 <= BMI && BMI < 40)
        {
            printf("BMI=%.2f, Obese (class II)", BMI);
        }
        else if (40.0 <= BMI)
        {
            printf("BMI=%.2f, Obese (class III)", BMI);
        }
    }
}