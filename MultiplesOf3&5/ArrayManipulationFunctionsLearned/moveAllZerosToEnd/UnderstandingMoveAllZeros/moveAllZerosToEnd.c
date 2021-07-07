#include <stdio.h>

int main()
{
    int arr[] = {1,6,0,3,8,9,0,2};
    int i, count=0;
    
    int n = 8;
    
    //Traverse an array
    for(i = 0; i < n; i++)
    {
        printf("Before: count: %d; arr[%d]: %d , i: %d; arr[%d]: %d\n", count, count, arr[count], i, i, arr[i]);
        if(arr[i] > 0)
        {
            arr[count++] = arr[i]; //[1, 6, 3, 8, 9, 2]
            printf("After1: count: %d; arr[%d]: %d , i: %d; arr[%d]: %d\n", count, count, arr[count], i, i, arr[i]);
        }
        printf("After2: count: %d; arr[%d]: %d , i: %d; arr[%d]: %d\n", count, count, arr[count], i, i, arr[i]);
    }
    
    //At the end push all zero elemets
    while(count < n)
    {
        arr[count++] = 0; //[1, 6, 3, 8, 9, 2, 0, 0]
    }
    
    //Print the array values
    for(i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return 0;
}

