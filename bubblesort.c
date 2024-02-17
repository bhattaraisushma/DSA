#include <stdio.h>
#include <stdlib.h>

void bubble(int arr[], int size)
{
    int temp = 0;
    printf("Sorted array is :\n");
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

void display(int A[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
   int arr[] = {65, 20, 2, 10, 75, 40, 15, 80};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("Given Array is: \n");
    display(arr, arr_size);
    bubble(arr, arr_size);
    display(arr, arr_size);
}
