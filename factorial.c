// #include <stdio.h>
// int main(){
//     int i,fact=1,n;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++)
//         {
//             fact=fact*i;
        
//     }
//     printf("%d",fact);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,fact,i;
    fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}