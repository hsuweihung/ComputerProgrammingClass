#include <stdio.h>
#define N 100

int arr[N];

int binarySearch(int target, int head, int tail)
{
    int mid = (head + tail) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
    {
        return binarySearch(target, head, tail = mid - 1); // 往左找
    }
    else
    {
        return binarySearch(target, head = mid + 1, tail); // 往右找
    }
    // if not appears
    return -1;
}

int main()
{
    int n, target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);
    int head = 0, tail = n - 1;
    int position = binarySearch(target, head, tail);
    printf("%d", position);
    return 0;
}