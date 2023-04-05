/*You are provided an array A of size N that contains non-negative integers. Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    printf("enter size of array=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[n-1]%10==0){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}

//m2
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int n,sum=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//        if(arr[i]%10==0){
//            sum++;
//        }
//     }
//     if(sum==n-1){
//         printf("yes");
//     }
//     else{
//         printf("No");
//     }
//     return 0;
// }


// m3
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int n,sum=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]%10==0){
//            sum++;
//        }
//     }
//     if(sum==n-1){
//         printf("yes");
//     }
//     else{
//         printf("No");
//     }
//     return 0;
// }