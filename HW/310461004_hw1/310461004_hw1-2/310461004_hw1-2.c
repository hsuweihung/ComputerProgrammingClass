#include <stdio.h>
int main()
{
    char symbal;
    int loan_amount_1, loan_amount_2, loan_periods;
    float annual_interest_rate;
    scanf("%c%d,%d %f %d", &symbal, &loan_amount_1, &loan_amount_2, &annual_interest_rate, &loan_periods);
    int loan_amount = loan_amount_1 * 1000 + loan_amount_2;
    float monthly_interest_rate = (annual_interest_rate / 12) / 100;
    int a = loan_amount % 2000;
    int b = a % 1000;
    int c = b % 500;
    int d = c % 100;
    int e = d % 10;
    if (0 <= loan_amount && loan_amount <= 999999 && 0 <= annual_interest_rate && annual_interest_rate <= 200 && 1 <= loan_periods && loan_periods <= 200)
    {
        printf("| $2000| $1000| $500| $100| $10| $1|\n");
        printf("|%6d| %5d| %4d| %4d| %3d| %2d|\n", loan_amount / 2000, a / 1000, b / 500, c / 100, d / 10, e);
        printf("Monthly interest rate: %.2f%%\n", monthly_interest_rate * 100);
        printf("Total loan amount: %.1f", loan_amount + (loan_amount * monthly_interest_rate) * loan_periods);
    }
    return 0;
}