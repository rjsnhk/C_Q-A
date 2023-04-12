#include <stdio.h>
int fib(int x);
int main(){
    int a,c,result;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
         result=fib(i);
        printf("%d ",result);
    }

    c=fib(a);
    printf("\n%d",c);
    return 0;
}
int fib(int x){
    if(x==0 || x==1)
        return x;
    else
        return fib(x-1)+fib(x-2);
}