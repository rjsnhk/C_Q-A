// WAP to find the sum of diagonal elements of a matrix
#include<stdio.h>
int main(){
    int x;
    printf("enter square matrix order");
    scanf("%d",&x);
    int A[x][x];
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            printf("2d array A[%d][%d]=",r,c);
            scanf("%d",&A[r][c]);
            
        }
    }
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            printf("%d\t",A[r][c]);
        }
        printf("\n");

    }
int sum=0;
    for(int r=0;r<x;r++){
        for(int c=0;c<x;c++){
            if(r==c){
                sum=sum+A[r][c];
            }
        }
    }
    printf("sum of diagonal=%d",sum);

}