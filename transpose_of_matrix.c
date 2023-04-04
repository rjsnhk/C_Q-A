// WAP to display the transpose of a matrix
#include<stdio.h>
int main(){
    int A[2][3],B[3][2];
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            printf("1st 2d array A[%d][%d]=",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    for(int r=0;r<3;r++){
        for(int c=0;c<2;c++){
            B[r][c]=A[c][r];
            printf("%d\t",B[r][c]);
        }
        printf("\n");
    }
}
