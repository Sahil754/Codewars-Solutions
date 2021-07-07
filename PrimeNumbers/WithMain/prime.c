//Prime Numbers - Solution without using math.h

#include <stdbool.h>
#include <stdio.h>
//#include <math.h>

int sqr(int a)
{
    //int a;

    float temp, sqr;

    // store the half of the given number e.g from 256 => 128
    sqr = a / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqr != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqr;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqr = ( a/temp + temp) / 2;
    }

    return sqr;
}

bool is_prime(int num)
{
    int i;
    bool flag = true;
    for (i = 2; i <= sqr(num); i++) {
 
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
 
    if (num <= 1)
        flag = false;
 
    if (flag == 1) {
        return true;
    }
    else {
        return false;
    }
  }

int main()
{
    bool n;
    n = is_prime(1);
    
  //int flag = 0;
  //printf("Enter a positive integer: ");
  //scanf("%d", &n);
    
       
    if (n == true)
    {
        printf("Is a prime number.");
    }
    else if(n == false)
    {
        printf("Is not a prime number.\n");
    }
    else
    {
        printf("1 is neither prime nor composite.");
    }

    return 0;
}
