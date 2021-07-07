//Prime Numbers - WRONG Solution

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int num)
{
  int i;
  bool flag = true;
  
  for(i = 2; i < sqrt(num); i++)
  {
    if(i % 2 == 0)
    {
      flag = false;
      break;
    }
  }
  
  if(num <= 1 || num == 0)
  {
    flag = false;
  }
  
  if (flag == true)
  {
    return true;
    //printf("%d is a prime number.", num);
  }
  else
  {
    return false;
    //printf("%d is not a prime number.", num);
  }
}
