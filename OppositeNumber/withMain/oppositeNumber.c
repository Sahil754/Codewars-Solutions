#include <stdio.h>

float opposite(float num) {
  float og, twice, twice2, opp;
  og = num;
  if(og < 1)
  {
    twice = og*-2;
    opp = og + twice;
    return opp;
  }
  else if(og > 1)
  {
    twice2 = og*2;
    opp = og - twice2;
    return opp;
  }
  else
  {
    return 0;
  }
}

int main()
{
    float store;
    store = 0;
    
    store = opposite(-1);
    printf("%f\n", store);
    return 0;
}

