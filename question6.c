#include<stdio.h>

int main(){

int c;
float a, b, d;

printf("Enter Any 2 Numbers:");
scanf("%f%f", &a, &b);

printf("Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division");
printf("\n\nEnter your choice:");
scanf("%d", &c);

switch(c)
{
case 1:
    d=a+b;
     printf("Result=%f",d);
    break;
case 2:
    d=a-b;
     printf("Result=%f",d);
    break;
case 3:
    d=a*b;
     printf("Result=%f",d);
    break;
case 4:
    d=a/b;
     printf("Result=%f",d);
    break;
default:printf("!!!!!Invalid Insertion!!!!!");
    break;
}
 return 0;
}

     