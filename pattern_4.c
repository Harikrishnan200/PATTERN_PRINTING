// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n=2,m;
    for(i=1;i<=3;i++){
        for(k=1;k<=i;k++){
            for(j=1;j<=n;j++)
              printf("* ");
            printf("\n");  
           
        }
       
        n+=2;
        if(i==3) break;
        for(m=1;m<=3;m++){
            printf("*\n");
        }
    }

    return 0;
}

/*
output:

* * 
*
*
*
* * * * 
* * * * 
*
*
*
* * * * * * 
* * * * * * 
* * * * * * 

*/