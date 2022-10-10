#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, j, c;
    printf("Enter a Number: ");
    scanf("%d", &i);
    for(j=0;i!=0;i=i/10){
        c=i%10;
        j=j+c;
    }

     printf("Sum of the individual digits is:%d", j);
     return 0;
}