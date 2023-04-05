/*You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo 10^9 + 7.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,multi=1;
    printf("enter size of array=");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        multi=multi*arr[i];
    }
    printf("%d",multi);
    return 0;
}