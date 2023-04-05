// Given an array, of size n, reverse it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    
    for(int i=n-1;i>=0;i--){
        printf("%d ",num[i]);
    }
    
    return 0;
}