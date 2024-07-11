// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n=2,m;
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
            printf("* ");
        }
        for(k=1;k<=i;k++){
            printf("\n*");
        }
        
        n+=1;
        printf("\n");   
    }

    return 0;
}


/*
output:

* * 
*
* * * 
*
*
* * * * 
*
*
*


*/