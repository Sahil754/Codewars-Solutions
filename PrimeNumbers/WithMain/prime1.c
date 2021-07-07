//Prime numbers question solution - CodeWars - SOLUTION - Working using math.h

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int num)
{
    int i;
    bool flag = true;
    for (i = 2; i <= sqrt(num); i++) {
 
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
 
    if (num <= 1)
        flag = false;
    //It can also be written as if (flag == 1)
    if (flag == true) {
        return true;
        //printf("%d is a prime number.", num);
    }
    else {
        return false;
        //printf("%d is not a prime number.", num);
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
