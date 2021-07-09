//Solution 1
#include <stddef.h>

int square_sum(const int *values, size_t count){
  int sum = 0;
  for (int i = 0; i < count; i++)
    sum += (values[i])*(values[i]);
  return sum;
};

//Solution 2
#include <stddef.h>
#include <math.h>
int square_sum(const int *values, size_t count)
{
  int result = 0;
  for(int i= 0;i< count;i++)
  {
    result += pow(*(values+i),2);
  }
  return result;
}

//Solution 3
#include <stddef.h>

int square_sum(const int *values, size_t count)
{
    int  i;
    int  result;
    
    i = 0;
    result = 0;
    while (i < count)
    {
        result += values[i] * values[i];
        ++i;
    }
    return (result);
}

//Solution 4
#include <stddef.h>

int square_sum(const int *values, size_t count) {
  int sum;
  for (sum=0; count>0 && values; count--, values++) {
    sum += ((*values) * (*values));
  }
  return sum;
}

//Solution 5
#include <stddef.h>

int square_sum(const int *values, size_t count)
{
    int sum = 0;
    int num;
    while (count--) {
        num = *(values+count);
        sum += num * num;
    }
    return sum;
}

//Solution 6
#include <stddef.h>

int square_sum(const int *values, size_t count){
    int res = 0;
    while(count--)
      res += (*values)*(*values++);
    return res;
}

//Solution 7
#include <stddef.h>

int square_sum(const int *values, size_t count)
{
  unsigned int sum = 0;
  for (unsigned int i = 0; i < count; i++)
    sum += values[i]*values[i];
    
  return sum;
}

//Solution 8
#include <stddef.h>

int square_sum(const int *values, size_t count) {
  int sum=0;
  while(count--) sum+=values[count]*values[count];
  return sum;
}

//Solution 9
#include <stddef.h>

int square_sum(const int *values, size_t count) {
  if (count == 0) return 0;
  
  return (values[count-1] * values[count-1]) + square_sum(values, count - 1);
}

//Solution 10
#include <stddef.h>

int square_sum(const int *values, size_t count){
  long sum=0;
  for(size_t i=0; i<count;i++){
    sum+=values[i]*values[i];
  }
  return sum;
};
