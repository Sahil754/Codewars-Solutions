#include <stdio.h>
 
int main(void) {
    // your code goes here
int a[] = {2,3,4,5};
int size;
 
size = sizeof(a)/sizeof(a[0]);//Method
 
printf ("size = %d\n",size);
    return 0;
}
