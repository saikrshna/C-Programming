#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,space,coef=1;
    
    printf("Enter The Number of Rows:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
        
          printf(" "); 
          for(j=0;j<=i;j++)
            {
                if(i==0 || j==0)
            coef=1;
            else
            coef=coef*(i-j+1)/j;
            
            printf("%2d",coef);
            
            }
            printf("\n\n");
    }
         return 0;
}