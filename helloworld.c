#include <stdio.h>
int main(){
    printf("Hello World! \n");
    char s[100]; //only 100 string lega
    // scanf("%s",s);//jha space ayega wha se katega


    scanf("%[^\n]s",s); //jab tak nextline(\n)/enter nhi dabega tab tak lega string
    printf("%s \n",s);
    printf("Hello rn! \n");

    return 0;
}