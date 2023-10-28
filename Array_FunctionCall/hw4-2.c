#include <stdio.h>
#define N 1024

// global variable array
int arr[N];

int duel(int left, int right)
{
    // 往右邊找，mid 在右邊
    if (left < right)
    {
        // Binary Search
        int mid = (left + right) / 2; // 計算 mid 位置
        int left_winner = duel(left, mid);
        int right_winner = duel(mid + 1, right); // mid 往右

        if (arr[left_winner] > arr[right_winner])
        {
            arr[left_winner] = arr[left_winner] - arr[right_winner]; // 勝出-對手
            return left_winner;
        }
        else
        {
            arr[right_winner] = arr[right_winner] - arr[left_winner]; // 勝出-對手
            return right_winner;
        }
    }
    // if left == right
    return left;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int winner = duel(0, n - 1);
    printf("%d %d", winner, arr[winner]);
    return 0;
}