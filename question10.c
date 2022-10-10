#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
    
    int height[50];
    int i,j,num,median;
    float sum , average;

    printf("Enter the Height one by one:");
    for(i=0;i<SIZE;i++){
        scanf("%d",&height[i]);
    }

    
    for(i=0;i<SIZE-1;i++){
        for(j=0;j<SIZE-i-1;j++){
            if(height[j]>height[j+1]){
                num = height[j];
                height[j]=height[j+1];
                height[j+1]=num;
            }
        }
    }

    
    printf("\tslNo.\t\theight\n");
    for(i=0;i<SIZE;i++){
        printf("\t\t %d\t\t\t %d\n",(i+1),height[i]);
    }

    printf("\n The Height Anlysis is As Follows:");
    
    for(i=0;i<SIZE;i++){
        sum += height[i];
    }
    average = sum/SIZE;

    median = (SIZE+1)/2;

    printf("\n  Average height    = %.2f",average);
    printf("\n  Median of height  = %d",height[median-1]);
    printf("\n  Minimum  height   = %d",height[0]);
    printf("\n  Maximum  height   = %d",height[SIZE-1]);
    

    return 0;
}

/**************************************************************
 * 1.START
2.define the size as 45
3.Read the height of the 45 student 
4.Sort the height array using bubble Sort
5.print the list of height
6.for calculating find the sum of the height and devided by size and 
assign the result to mean variable
7.for calculating median by (size+1)/2 th observation and assign it as median
8.print the mean
9. To print meadian , the correct value in the height is in the median-1 index
10. Because the height is sorted , the minimum height in the zeroth index and
maximum height in size-1 index
11.STOP
*****************************************************/
