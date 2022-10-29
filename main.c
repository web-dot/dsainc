#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*binary search - sorted array*/
    int arr[14] = {2,7,9,13,18,24,37,41,54,67,73,89,91,100};
    int n = binarySearch(arr, 0, 14, 89);
    printf("%d", n);
}

int binarySearch(int *arr, int min, int n, int item)
{
    int low = min;
    int high = n;
    while(low < high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==item)
        {
            return mid;
        }
        if(item>arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        low++;
        high--;
    }
    return -1;
}

