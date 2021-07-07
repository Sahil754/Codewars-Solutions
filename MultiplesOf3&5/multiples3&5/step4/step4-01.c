/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS*/

#include <stdio.h>

#define ARRAY_SIZE 10

void reverseArray(int arr[], int start, int end)
{
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int * multiple(int num)
{
    static int m[ARRAY_SIZE];
    //static int n[ARRAY_SIZE];
    //int temp = num, temp2 = num, count =0;
    int temp = num, count =0;
    
    if(temp == 0 || temp < 0 /*||temp2 == 0 || temp2 < 0 */ )
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
    //num = num;
    /*For multiples of 5
    for(int i = 0; i < temp2; i++)
    {
        if(num % 5 == 0)
        {
            n[i] = num;
            printf("Before num: %d\n", num);
            num = num - 1;
            printf("m[%d] = %d",i, n[i]);
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
    }*/
    
    //Reverse Array
    int start = 0, arrayLength;
    arrayLength = sizeof(m)/sizeof(m[0]);
    reverseArray(m, start, arrayLength-1);
    
    //Traverse array and move all whole numbers apart from 0 to the left
    for(int i = 0; i < sizeof(m)/sizeof(m[0]); i++)
    {
        if(m[i] > 0)
        {
            m[count++] = m[i];
        }
    }
    
    //Add appropriate number of zeros at the end of the array
    while(count < sizeof(m)/sizeof(m[0]))
    {
        m[count++] = 0;
    }
    
    return m;
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



