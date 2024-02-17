#include <stdio.h>
#include <stdlib.h>

void bubble(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int l, int r, int n)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] < n)
        {
            l = mid + 1;
        }
        else if (arr[mid] > n)
        {
            r = mid - 1;
        }
        else if (arr[mid] == n)
        {
            printf("The number is present at the list!!\n");
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {55, 20, 5, 10, 35, 40, 100, 60};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, arr_size);
    int key;
    printf("Enter the number you want to search: \n");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, arr_size - 1, key);
    (result == -1) ? printf("The number doesn't exist") : printf("The number is at %d index", result);
}
