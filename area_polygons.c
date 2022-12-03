#include<stdio.h>
#include<math.h>
 int main()
 {
     int option;
     float l,b,a,d, c, s, result1, result2;
     printf("Enter 1 for AREA OF RECTANGLE\nEnter 2 for AREA OF TRIANGLE:");
     scanf("%d", &option);
     
    if(option==1){
    printf("Enter Length and breadth of rectangle:");
    scanf("%f%f", &l, &b);

    result1=l*b;
    printf("The Area Of Rectangle is %f:", result1);

    }else if(option==2){
    printf("Enter 3 sides of Triangle:");
    scanf("%f%f%f", &a, &d, &c );

    s=(a+d+c)/2;
    result2= sqrt(s*(s-a)*(s-d)*(s-c));
    printf("The Area of Triangle is %f", result2);
}else{
 printf("Invalid Insertion");
}
    return 0;
 }
