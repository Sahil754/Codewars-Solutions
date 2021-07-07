/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS*/

#include <stdio.h>

#define ARRAY_SIZE 10

void reverseArray(int arr[], int start, int end)
{
    int temp = 0;
    while(start < end)
    {
        printf("Before-temp: %d\n", temp);
        temp = arr[start];
        printf("After-temp: %d\n", temp);
        printf("Before-arr[start: %d]: %d\n", start, arr[start]);
        arr[start] = arr[end];
        printf("After-arr[start: %d]: %d\n", start, arr[start]);
        printf("Before-arr[end: %d]: %d\n",end, arr[start]);
        arr[end] = temp;
        printf("After-arr[end: %d]: %d\n\n",end, arr[start]);
        printf("Before-start: %d, end: %d\n",start, end);
        start++;
        end--;
        printf("After-start: %d, end: %d\n\n",start, end);
    }
}

int * multiple(int num)
{
    static int m[ARRAY_SIZE];
    static int n[ARRAY_SIZE];
    int temp = num, temp2 = num, count =0;
    
    if(temp == 0 || temp < 0 ||temp2 == 0 || temp2 < 0)
    {
        return 0;
    }
    
    //For multiples of 3
    for(int i = 0; i < temp; i++)
    {
        if(num % 3 == 0)
        {
            m[i] = num;
            printf("Before num: %d\n", num);
            num = num - 1;
            printf("m[%d] = %d",i, m[i]);
            printf(", After num: %d\n", num);
            printf("\n");
        }
        else
        {
            printf("Before num: %d\n", num);
            num = num - 1;
            printf("After num: %d\n", num);
            printf("\n");
        }
    }
    
    //Resetting num to original number passed by user (to use for multiples of 5)
    num = temp;
    //For multiples of 5
    for(int i = 0; i < temp2; i++)
    {
        if(num % 5 == 0)
        {
            n[i] = num;
            printf("Before num: %d\n", num);
            num = num - 1;
            printf("n[%d] = %d",i, n[i]);
            printf(", After num: %d\n", num);
            printf("\n");
        }
        else
        {
            printf("Before num: %d\n", num);
            num = num - 1;
            printf("After num: %d\n", num);
            printf("\n");
        }
    }
    
    //Reverse Array
    //Multiple of 3
    int start = 0, arrayLength;
    arrayLength = sizeof(m)/sizeof(m[0]);
    reverseArray(m, start, arrayLength-1);
    
    //Reverse Array
    //Multiple of 5
    arrayLength = sizeof(n)/sizeof(n[0]);
    reverseArray(n, start, arrayLength-1);

    //Multiple of 3
    //Traverse array and move all whole numbers apart from 0 to the left
    for(int i = 0; i < sizeof(m)/sizeof(m[0]); i++)
    {
        if(m[i] > 0)
        {
            printf("Before: count: %d\n", count);
            m[count++] = m[i];
            printf("After: count: %d\n\n", count);
        }
    }
    
//printf("After1-Count: %d\n", count);
    
//printf("After1-Count: %d\n", count);
    //Add appropriate number of zeros at the end of the array
    while(count < sizeof(m)/sizeof(m[0]))
    {
        printf("Before: count: %d\n", count);
        m[count++] = 0;
        printf("After: count: %d\n", count);
    }
    
    count = 0;
//printf("After-Count: %d\n", count);
    //Multiple of 5
    //Traverse array and move all whole numbers apart from 0 to the left
    for(int i = 0; i < sizeof(n)/sizeof(n[0]); i++)
    {
        if(n[i] > 0)
        {
            n[count++] = n[i];
        }
    }
    
    //Add appropriate number of zeros at the end of the array
    while(count < sizeof(n)/sizeof(n[0]))
    {
        n[count++] = 0;
    }
    
    return m;
    //return n;
}

int main(){

    int *p;
    int i;
    
    p = multiple(10);
    
    if(p == 0)
    {
        printf("Invalid input");
    }
    else
    {
        for(i = 0; i < ARRAY_SIZE; i++)
        {
            printf("*(p + %d) : %d\n", i, *(p + i));
        }
    }
    return 0;
}
