/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS*/

#include <stdio.h>

int solution(int num) {
    
    //num = num - 1;
    int x, sum;
    x = sum = 0;
    
    for(x = 1; x < num; x++)
    {
        if(((x % 3) == 0) || ((x % 5) == 0))
        {
            sum = sum + x;
        }
    }
    
    return sum;
}

int main(){
    
    //printf("Array double: %d", ARRAY_SIZE_DOUBLE);
//    int b = 0;
//    int *p = &b;
//    int i;

    //int b = 0;
    //int *p = &b;
    int p = 0;
    
    p = solution(10);
   
    printf("%d\n", p);
    
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
