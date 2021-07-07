/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS*/

#include <stdio.h>

#define ARRAY_SIZE 10

int * multiple(int num)
{
    static int m[ARRAY_SIZE];
    static int n[ARRAY_SIZE];
    int temp = num;
    
    if(temp == 0 || temp < 0)
    {
        return 0;
    }
    
    //Finding multiples of 3
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
    
    //Adding multiples of 3 to sum
    int sum2 = 0;
    int *sum = &sum2;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        *sum = *sum + *(m + i);
    }
    
    //Resetting num to original number passed by user (to use for multiples of 5)
    num = temp;
    //Finding multiples of 5
    for(int i = 0; i < temp; i++)
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
    
    //Adding multiples of 5 to sum
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        *sum = *sum + *(n + i);
    }

    //printf("sum: %d", *sum);
//    printf("\nsum: %d\n", *sum);
//    printf("sum2: %d", sum2);
    
//    int sum2 = 0;
//    int *sum = &sum2;
//    for(int i = 0; i < arrSize3; i++)
//    {
//        *sum = *sum + *(o + i);
//    }
//
//    //printf("sum: %d", *sum);
//    printf("sum: %d\n", *sum);
//    printf("sum2: %d", sum2);
    
    return sum;
    //return sum;
    //return o;
    //return m;
    //return n;
}

int main(){
    
    //printf("Array double: %d", ARRAY_SIZE_DOUBLE);
//    int b = 0;
//    int *p = &b;
//    int i;

    //int b = 0;
    //int *p = &b;
    int *p = NULL;
    
    p = multiple(10);
   
    printf("%d\n", *p);
    
//    if(p == 0)
//    {
//        printf("Invalid input");
//    }
//    else
//    {
//        for(i = 0; i < ARRAY_SIZE_DOUBLE; i++)
//        {
//            printf("*(p + %d) : %d\n", i, *(p + i));
//        }
//    }
    return 0;
}



