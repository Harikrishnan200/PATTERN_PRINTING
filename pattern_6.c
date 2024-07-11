// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n=10,m;
    m=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n){
                printf("* ");
            }
            else {
           //     printf("%d",m);
                if(j == m){
                   printf("* ");
                   m-=1;
                }
                else
                   printf("  ");
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
          *         
        *           
      *             
    *               
  *                 
* * * * * * * * * * 
*/


#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n=10,m;
    m=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || j==n-i+1){
                printf("* ");
            }
            else {
           //     printf("%d",m);
               
                   printf("  ");
            }   
        }
        
        printf("\n");
    }

    return 0;
}
