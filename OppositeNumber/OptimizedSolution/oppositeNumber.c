#include <stdio.h>

float opposite(float num) {
    return num * -1;
  }

int main()
{
    printf("%f\n", opposite(0));
    printf("%f\n", opposite(3));
    printf("%f\n", opposite(-3));
    return 0;
}

