#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*unsorted array*/

    int arr[14] = {50,41,49,39,24,10,28,30,16,31,15,20};
    int sizeOfArr = sizeof(arr);
    int sizeOfInt = sizeof(arr[0]);
    int size = sizeOfArr/sizeOfInt;

    /*insertion sort*/
    insertion_sort(arr, size);
    print_array(arr, size);


    /*binary search*/
    //int n = binary_search(arr, 0, 14, 89);
    //printf("\n%d", n);

    return 0;
}

/*
    Function -> insertion sort
    @param: array
    @param: size of array
    time complexity: O()
*/
void insertion_sort(int arr[], int size)
{
    int i, key, j;
    for(i=0; i<size; i++)
    {
        key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        print_array(arr, size);
        printf("\n");
    }
}


/*
    Function -> binary search
    @param: array address
    @param: minimum element index
    @param: maximum element index
    @param: item to search
    @return: index of searched item
    time complexity: O(log n)
*/
int binary_search(int *arr, int min, int max, int item)
{
    int low = min;
    int high = max;
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


/*print function*/
void print_array(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

