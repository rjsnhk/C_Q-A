#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int pallin(int n){
        int b,a=0;
        b=n;
        for(;n!=0;){
            a=a*10+n%10;
            n=n/10;
        }

    if(a==b){
        printf('YES');
    }
    else{
        printf("NO");
    }

    }
int main() {
    int a;
    scanf("%d",&a);
    pallin(a);

    return 0;
}
