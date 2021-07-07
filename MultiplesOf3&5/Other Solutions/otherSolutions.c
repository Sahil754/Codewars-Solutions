/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS*/

#include <stdio.h>

//Solution 1
int solution(int number) {
    int sum = 0;
    for(int i = 0; i < number; i++)
      if( (i % 3) == 0 || (i % 5) == 0)
        sum += i;
    return sum;
}

//Solution 2
int solution(int number) {
    int total = 0;
    for (int i = 0; i < number; i++) {
      if (i % 3 == 0 || i % 5 == 0) {
        total = total + i;
      }
    }
    return total;
}

//Solution 3
int sum(int mult, int n)
{
    return mult * n * (n + 1) / 2;
}

int solution(int number)
{
    int n3 = number / 3;
    int n5 = number / 5;
    int n15 = number / 15;

    int m3 = number % 3;
    int m5 = number % 5;

    if (m3 == 0) --n3;
    if (m5 == 0) --n5;
    if (m3 == 0 && m5 == 0) --n15;

    return sum(3, n3) + sum(5, n5) - sum(15, n15);
}

//Solution 4
int solution(int number) {

  int sum = 0;

  for (int i = 0; i < number; i++) {  // for every number below 'number'
    if (i % 5 == 0 || i % 3 == 0) {   // if it is divisible by 3 or 5
      sum = sum + i;                  // add it to sum
    }
  }
  
  return sum;
}

//Solution 5
int solution(int n) {
  int result = 0;
  for (int i = 0; i < n; i++) if (i % 3 == 0 || i % 5 == 0) result += i;
  return result;
}

//Solution 6
int solution(int number) {
    int sum = 0;
    while (--number > 0)
        sum += (number % 3 == 0 || number % 5 == 0) ? number : 0;
    return sum;
}

//Solution 7
int solution(int number) {
  if (number <= 1) {
    return 0;
  }
  number -= 1;
  int n3 = number / 3;
  int n5 = number / 5;
  int n15 = number / 15;
  return (3 * n3 * (n3 + 1) + 5 * n5 * (n5 + 1) - 15 * n15 * (n15 + 1)) / 2;
}

//Solution 8
int solution(int number) {
    if (number-- <= 0) return 0;
    return (number % 3 == 0 || number % 5 == 0) ? number + solution(number) : solution(number);
}

//Solution 9
int solution(int number) {
    int sum = 0;
  
    for( int i = 1; i < number; i++ )
    {
      if( i % 3 == 0 )
        sum += i;
      else if( i % 5 == 0 )
        sum += i;
    }
    
    return sum;
}

//Solution 10
/*
 * 计算等差数列
 */
int accumulate(int base, int count)
{
    return (base + base * count) * count / 2;
}

int solution(int number)
{
    int sum = 0, numberSubOne = number - 1;
    sum += accumulate(3, numberSubOne / 3);
    sum += accumulate(5, numberSubOne / 5);
    sum -= accumulate(15, numberSubOne / 15);
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



