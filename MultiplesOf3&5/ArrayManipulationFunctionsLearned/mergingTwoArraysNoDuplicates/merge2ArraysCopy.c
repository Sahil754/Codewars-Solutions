/**
 *
 * Example answers the question: How to merge two arrays without duplicates?
 *
 * A={1,2,3,4,5} B={1,2,3,6}
 */
#include <stdio.h>

#define F 5
#define S 4
#define L F+S

int main() {
    int A[F]={1,2,3,4,5};
    int B[S]={1,5,6,7};
    int U[L];

    int i=0,j=0,x=0, count=F, flag=1;

    printf("Primo vettore:\n");
    for(i=0;i<F;i++){
        printf("%d ", A[i]);
    }

    printf("\n");

    printf("Secondo vettore:\n");
    for(i=0;i<S;i++){
        printf("%d ", B[i]);
    }

    printf("\n");

    for(i=0;i<F;i++){     //i copy each element of array A to array B.
        U[i]=A[i];
    }

    for(i=0;i<S;i++){
        flag=1;
        x=0;
        for(j=0;flag==1 && j<F;j++){
            if(A[j]==B[i]){
            flag=0;
            }
        }
        if(flag==1){
            U[count]=B[i];
            count++;
        }
    }

    printf("Vettore generato:\n");
    for(i=0;i<count;i++)
    printf(" %d ", U[i]);
    printf("\n");

    return 0;
}
