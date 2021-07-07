/*//Space Complexity Example 1 Program to calculate Sum from Cracking the coding interview Book
#include <stdio.h>

int sum(int n)
{
    if( n <= 0)
    {
        return 0;
    }
    return n + sum(n-1);
}

int main()
{
    int result = sum(4);
    printf("%d\n", result);
}*/

//Space Complexity Example 2 Program which adds adjacent elements between O and n from Cracking the coding interview Book
#include <stdio.h>

int pairSum(int a, int b) {
    return a + b;
}

int pairSumSequence(int n) {/* Ex 2.*/
    int sum = 0;
    for (int i= 0; i < n; i++) {
    sum+= pairSum(i, i + 1);
}
return sum;
}

int main()
{
    //int sum = pairSum(3,7);
    //printf("%d\n", sum);
    
    int sum = pairSumSequence(5);
    printf("%d\n", sum);
}
