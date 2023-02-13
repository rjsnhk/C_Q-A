//method-1
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

//     char ch,s[100],sen[100];
//     scanf("%c",&ch);
//     scanf("%s",s);
//     scanf("\n");  // yha break hoke run nhi hoga
//     scanf("%[^\n]s",sen);  //yha run hoga
//     printf("%c\n%s\n%s",ch,s,sen);
//     return 0;
// }


//method=2
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

//     char ch,s[100],sen[100],g;
//     scanf("%c",&ch);
//     scanf("%s",s);
//     scanf("%d",&g); //ye control krega next line pe jane ke liye
//     scanf("%[^\n]s",sen);
//     printf("%c\n%s\n%s",ch,s,sen);
//     return 0;
// }


//method 3 -- optimized
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch,s[100],sen[100];
    scanf("%c%s\n%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}