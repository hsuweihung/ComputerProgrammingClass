#include <stdio.h>
#include <limits.h>

int main()
{
    int size_of_array;
    scanf("%d", &size_of_array);
    int arr[size_of_array][size_of_array];

    for (int i = 0; i < size_of_array; i++)
    {
        for (int j = 0; j < size_of_array; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int expand_num;
    scanf("%d", &expand_num);

    int max_sum = INT_MIN;
    int center_x, center_y;
    int current_sums[size_of_array][size_of_array];

    for (int i = 0; i < size_of_array; i++)
    {
        for (int j = 0; j < size_of_array; j++)
        {
            int current_sum = arr[i][j];

            if (i - expand_num >= 0)
            {
                current_sum += arr[i - expand_num][j];
            }

            if (i + expand_num < size_of_array)
            {
                current_sum += arr[i + expand_num][j];
            }

            if (j - expand_num >= 0)
            {
                current_sum += arr[i][j - expand_num];
            }

            if (j + expand_num < size_of_array)
            {
                current_sum += arr[i][j + expand_num];
            }

            current_sums[i][j] = current_sum;

            if (current_sum > max_sum || (current_sum == max_sum && i >= center_x && j >= center_y))
            {
                max_sum = current_sum;
                center_x = i;
                center_y = j;
            }
        }
    }

    printf("(%d,%d) %d\n", center_x, center_y, max_sum);
}
