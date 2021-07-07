/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS*/

#include <stdio.h>

#define ARRAY_SIZE 16

int * multiple(int num)
{
    static int m[ARRAY_SIZE];
    static int n[ARRAY_SIZE];
    num = num - 1;
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
    
    //Start - remove later - for testing only
//    for(int i = 0; i < ARRAY_SIZE; i++)
//        {
//            printf("*(m + %d) : %d\n", i, *(m + i));
//        }
    //end - remove later - for testing only
    
    
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
    
    //Start - remove later - for testing only
//    for(int i = 0; i < ARRAY_SIZE; i++)
//        {
//            printf("*(n + %d) : %d\n", i, *(n + i));
//        }
    //end - remove later - for testing only
    
    for(int i=0;i<ARRAY_SIZE;i++){     //Copying each element of array B/array2 to array U.
        int flag=1;
        //x=0;
        for(int j=0;flag==1 && j<ARRAY_SIZE;j++){
            if(m[j]==n[i]){
            flag=0;
            }
        }
        if(flag==1){
            *sum = *sum + *(n + i);
        }
    }
    
    printf("%d\n", *sum);
    
    //Adding multiples of 5 to sum
//    for(int i = 0; i < ARRAY_SIZE; i++)
//    {
//        *sum = *sum + *(n + i);
//    }
    
    return sum;
}

int main(){
    
    //printf("Array double: %d", ARRAY_SIZE_DOUBLE);
//    int b = 0;
//    int *p = &b;
//    int i;

    //int b = 0;
    //int *p = &b;
    int *p = NULL;
    
    p = multiple(16);
   
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



