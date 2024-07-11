#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n=10,m;
    m=2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==n ||j==i ){ // j == i for printing diganol
                printf("* ");
            }
            else {
                printf("  ");
             
        }
        }
        
        printf("\n");
    }

    return 0;
}


/*
output:

*                 * 
* *               * 
*   *             * 
*     *           * 
*       *         * 
*         *       * 
*           *     * 
*             *   * 
*               * * 
*                 * 


*/