#include<stdio.h>
#include<stdlib.h>

int main(){
 
   
    int firstMx[10][10],secondMx[10][10],resMx[10][10];
    int sum =0;
    int i,j,k,mxSize,M,P,N,Q;
    
    
    printf("Enter the row and column size of first matrix:");
    scanf("%d%d",&M,&N);
    printf("Enter the row and column size of second matrix:");
    scanf("%d%d",&P,&Q);
    
  
    if(M == P && N == Q){
        
        printf("Enter the elements of first matrix (M1):");
        
        for(i=0;i<M;i++){
            
            for(j=0;j<N;j++){
                
                scanf("%d",&firstMx[i][j]);
            }
        }
        
        
        printf("Enter the elements of second matrix(M2):");
        
        for(i=0;i<P;i++){
            
            for(j=0;j<Q;j++){
                
                scanf("%d",&secondMx[i][j]);
            }
        }
        
        
        printf("elements of first matrix are:\n");
        for(i=0;i<M;i++){
            for(j=0;j<Q;j++){
                printf("\t%d",firstMx[i][j]);
            }
            printf("\n");
        }
        
        
        printf("elements of second matrix are:\n");
        for(i=0;i<P;i++){
            for(j=0;j<Q;j++){
                printf("\t%d",secondMx[i][j]);
            }
            printf("\n");
        }
        
        
       printf("Matrix After Additon:\n");
        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                printf("\t%d",(firstMx[i][j] + secondMx[i][j]));
            }
            printf("\n");
        }


        
    }else{
        printf (" addition not possible!!!!!!");
    }
    
   
    if(N == P){
        
        for(i=0;i<M;i++){
            for(j=0;j<Q;j++){
                
                for(k=0;k<N;k++){
                    sum += firstMx[i][k] * secondMx[k][j];
                }
                
                resMx[i][j] = sum;
                sum =0;
                
            }
        }
        
        
        printf("\nMatrix After Multiplication: \n");
        for(i=0;i<M;i++){
            for(j=0;j<Q;j++){
                printf("\t%d",resMx[i][j]);
            }
            
            printf("\n");
            
        }
        
    }else{
         printf (" multiplication not possible!!!!!!");
    }
    
    
    return 0;
}

/*************************************************************************
 *     1.Start

       2. Read the row size or column size from the user

       3. Check whether the matrices are identical or not. If yes go to step 4 
            Else print addition not possible

       4.Read the first and second matrices from the user

       5. Print the first and second matices .

       6. Check whether the dimension of first matrix equal to dimension of 
            the second matrix or not . If true Print the  added array by    adding each
             corresponding elements of matrices,else  Print addition is not possible.

       7.Check whether the column size of first matrix and row size of second 
          Matrix are equal or not .If yes go to step 8 else print multiplication is not 
          possible.

       8. Multiply and add row elements of  first matrix and column  element of 
           Second matrix and assign as sum (this sum is the elements of 
            resultant  matrix).

       9.  Print the resultant matrix( multiplied matrix)

       10. Stop
       **************************************************************/