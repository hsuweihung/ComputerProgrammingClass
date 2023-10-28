#include <stdio.h>

int parent[1000];

void set_node(int n) // 設定節點，最外圍
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        // printf("%d\n", parent[i]);
    }
}

int find_root(int node)
{
    if (parent[node] == node) // 節點的父親是自己，代表自己是根
    {
        return node;
    }
    return find_root(parent[node]); // 遞迴找到父親
}

void find_sets(int node1, int node2)
{
    int root1 = find_root(node1);
    int root2 = find_root(node2);
    if (root1 != root2)
    {
        parent[root1] = root2;
    }
}

int main()
{
    // array 輸入
    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size][arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    set_node(arr_size); // 初始化 node

    for (int i = 0; i < arr_size; i++) // 歷經每一個 array 裡面的 node
    {
        for (int j = 0; j < arr_size; j++)
        {
            if (arr[i][j] == 1)
            {
                find_sets(i, j);
            }
        }
    }

    int num_set = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (find_root(i) == i)
        {
            num_set++;
        }
    }

    printf("%d\n", num_set);
}