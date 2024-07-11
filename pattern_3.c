// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int k=4,i,j,c,b=1;
    for(int c=1;c<=4;c++){
       if(k>10) k=10;
        for(int i =1;i<=b;i++){
            printf("* \n");
        
         }
        b = (b%2==0)?1:2;
        if(c==4) break;
        
        for(j=1;j<=k;j++){
            
                printf("* ");
            }
        k+=4;
        printf("\n");
    }

    return 0;
}