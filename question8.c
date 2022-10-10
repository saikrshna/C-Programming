#include <stdio.h>
#include<stdlib.h>

int main()
{
    int num, n, i, j;

    printf("Enter the Range:");
    scanf("%d", &n);


        printf("The Prime numbers are:"); 
        
        for(i=2; i<=n; i++){
            
            num=1;
            
            for(j=2; j<=i/2; j++){
                if(i%j==0){
                    num=0;
                    break;
                
                }
            }
            if(num==1){
                
                printf("\n%d", i);
                
            }
        } return 0;
    }
    