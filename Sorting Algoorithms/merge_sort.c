#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int size = right - left + 1;
    int *temp = (int *)malloc(size * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Merge the two sorted halves
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from left half
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back to original array
    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }

    free(temp);
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Divide
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Conquer / Merge
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array:   ");
    printArray(arr, n);

    free(arr);

    return 0;
}