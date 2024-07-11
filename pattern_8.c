#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n=10;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||i==n/2) printf("* ");
            else{
                if(i<n/2 && j==1){
                    printf("*");
                }else if(i>n/2 && j==n){
                    printf("*");
                }
                else{
                    printf("  ");
                }
            }
            
           
        }
       
        
        printf("\n");
    }
    return 0;
}


/*
output:
* * * * * * * * * * 
*                  
*                  
*                  
* * * * * * * * * * 
                  *
                  *
                  *
                  *
* * * * * * * * * * 

*/