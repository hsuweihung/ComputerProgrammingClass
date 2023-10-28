#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverseMat(int mat[1000][1000], int m, int n)
{
    // 水平轉，翻轉一半，n/2
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(&mat[i][j], &mat[i][n - 1 - j]);
        }
    }
    // 垂直翻轉，轉一半，m/2
    for (int i = 0; i < m / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(&mat[i][j], &mat[m - 1 - i][j]);
        }
    }
    // 印出
    for (int i; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", mat[i][j]);
            // 印出空行間距
            if (j < n - 1)
            {
                printf(" ");
            }
        }
    }
}

int main()
{
    // Fetch the inputs of array
    int row_size, col_size;
    scanf("%d %d", &row_size, &col_size);
    int arr[row_size][col_size];

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    reverseMat(arr, row_size, col_size);

    return 0;
}