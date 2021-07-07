/*
* Example program to get length of char array in C
*/

#include<stdio.h>
int main(){

    int Length  =0;

    char arr[] = {'h','e','l','l','o'};//5 elements
    
    //Calculate length of the array ( Number of elements)
    Length  = sizeof(arr)/sizeof(char);

    //display array length
    printf("Char Array length is: %d\n",Length );

    return 0;
}
