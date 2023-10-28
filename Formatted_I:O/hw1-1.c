#include <stdio.h>
int main()
{
    int year, month, day; // 宣告變數
    int roc_new = 1911;
    scanf("%d/%d/%d", &year, &month, &day); // 輸入三個變數
    // 題目條件設定
    if (-1911 <= year && year <= 112 && 1 <= month && month <= 12 && 1 <= day && day <= 31)
    {
        printf("Germany: %02d.%02d.%04d\n", day, month, year + roc_new); // 補0設定，year四位數，前面補零，day,month 二位數前面補零
        printf("Belgium: %02d/%02d/%04d\n", day, month, year + roc_new);
        printf("Taiwan: %04d/%02d/%02d\n", year + roc_new, month, day);
        printf("US: %02d/%02d/%02d\n", month, day, (year + roc_new) % 100); // 只取最後兩位數，用餘數運算
        printf("UK: %02d/%02d/%02d", day, month, (year + roc_new) % 100);
    }
    return 0;
}