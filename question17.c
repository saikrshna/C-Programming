#include <stdio.h>
#include<stdlib.h>

int main(){
    
    int mark[100];
    int j,count=0, choice;
    float sum=0, avg=0;
    int *ptr ;
    ptr = mark;

    printf("Enter the Number of Students: ");
    scanf("%d", &choice);

    for(j=0;j<choice;j++){
        printf("Enter the mark of %d student : ",(j+1));
        scanf("%d", (ptr+j));
    }
    
    for(j=0;j<choice;j++){
        sum += *(ptr+j);
    }

    avg = sum/choice;

    for(j=0;j<choice;j++){
        if(*(ptr+j)>=avg){
            count++;
        }
    }
    printf("\n");
    printf("Avarage Mark of the Students : %.2f\n",avg);
    printf("\nNumber of student whose mark is greater\n than average (including average) is : %d\n",count);

    return 0;
}

/****************************************************************************
1. Start
2. Let A be an integer array having 53 components
3. Read values into the array
4. Calculate the sum and average
5. Count the number of students having marks greater than or equal to average
6. Print the result
7. Stop

*****************************************************************************/