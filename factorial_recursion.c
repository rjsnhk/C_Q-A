#include<stdio.h>
int fact(int x);
int main(){
    int a,c;
    scanf("%d",&a);
    c=fact(a);
    printf("%d",c);
    return 0;
}
int fact(int x){
    if (x==0)
        return 1;
    else
        return x*fact(x-1); 
}