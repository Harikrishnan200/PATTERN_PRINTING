#include <stdio.h>

int main() {
    int i,j,k;
    int n=4,s=5;
    for(i=1;i<=4;i++){
        for(j=1;j<=s;j++){
            printf("* ");
        }
        printf("\n");
        s+=5;
        if(i==4) break;
        for(k=1;k<=i;k++){
            printf("*\n");
        }
    }

    return 0;
}


/*  Output:

* * * * * 
*
* * * * * * * * * * 
*
*
* * * * * * * * * * * * * * * 
*
*
*
* * * * * * * * * * * * * * * * * * * *       */