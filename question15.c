#include <stdio.h>
#include<stdio.h>

int fib(int n){
      
    if(n<2)
      {
        return n;
      }

    return fib(n-1)+fib(n-2);
}

int main(){
    int number,j;

    printf("Enter the number of terms : ");
    scanf("%d",&number);
 
    printf("The Obtained Fibonacci series is : ");
       for(j=0;j<number;j++)
       {
        printf("\t%d",fib(j));
       }
    return 0;
}



/**********************************************************************
 1. Start
 2. Read the number of terms from the user
 3. Run a loop upto number of terms
 4. Print the fibonacci value by the recursive fibonacci function.
 5. Check whether the number is less than 2 or not , if less than 2 then return
    the  number
 6. Else again call the fibonacci function with number-1 and number -2 and 
    return the sum of them.
 7. Stop
****************************************************************/