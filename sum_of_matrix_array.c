// // WAP to find the sum of two matrices
#include<stdio.h>
int main(){
    int A[2][3],B[2][3],C[2][3];
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            printf("1st 2d array A[%d][%d]=",r,c);
            scanf("%d",&A[r][c]); //15 april 12-1
        }
    }
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            printf("2nd 2d array B[%d][%d]=",r,c);
            scanf("%d",&B[r][c]); //15 april 12-1
        }
    }
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            C[r][c]=A[r][c]+B[r][c];
            printf("%d\t",C[r][c]);
        }
        printf("\n");
    }
}



// ppt method

// #include <stdio.h>
// int main()
// {
//    float a[3][3], b[3][3], c[3][3];
//    int i, j;
//    printf("Enter elements of 1st matrix\n");
//    for(i=0; i<3; i++)
//    {
//    for(j=0; j<3 ;j++)
//     {
//        printf("Enter a%d%d: ", i, j);
//        scanf("%f", &a[i][j]);
//     }
//    }
//   // Taking input using nested for loop
//    printf("Enter elements of 2nd matrix\n");
//    for(i=0; i<3; i++)
//    {
//     for(j=0; j<3; j++)
//     {
//        printf("Enter b%d%d: ", i, j);
//        scanf("%f", &b[i][j]);
//     }
//    }
//    // adding corresponding elements of two  array
//     for(i=0; i<3; i++)
//    {
//     for(j=0; j<3; j++)
//     {
//        c[i][j] = a[i][j] + b[i][j]; 
//     }
//    }
//    // Displaying the sum
//    printf("\nSum Of Matrix:\n");

//    for(i=0; i<3; i++)
//    {
//     for(j=0; j<3; j++)
//     {
//        printf("%.1f\t", c[i][j]);  
//     }            
//           printf("\n");
//     }
// return 0;
// }
