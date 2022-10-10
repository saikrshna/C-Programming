#include<stdio.h>
#include<stdlib.h>

int main(){
    
    struct data
    {
    char name[100];
    int reg_no;
    int maths,physics,chemistry,total_mark;
    };

    int n,i, SIZE;
    struct data markList[100];

    printf("Enter The Number Of Students : ");
    scanf("%d", &SIZE);
    printf("\n");
   
    for(i=0;i<SIZE;i++){
        printf("Enter SL. number:");
        scanf("%d",&markList[i].reg_no);

        printf("Enter %d student Name: ",i+1);
        scanf("%s",&markList[i].name);

        printf("Enter The sujectwise marks \n");
        printf("Maths     : ");
        scanf("%d",&markList[i].maths);
        printf("Physics   : ");
        scanf("%d",&markList[i].physics);
        printf("Chemistry : ");
        scanf("%d",&markList[i].chemistry);
        markList[i].total_mark = markList[i].maths+markList[i].physics+markList[i].chemistry;
        printf("\n");
        
    }

    
    printf("\t\t\tChristian College\n");
    printf("\t\t\tStatement of Mark\n\n");
    
    printf("SL.No\tName\tMaths  \tPhysics\tChemistry\tTotal marks\n");
    
    for(i=0;i<SIZE;i++){
        printf(" %d%10s%6d%10d%8d%20d\n",markList[i].reg_no,markList[i].name,markList[i].maths,markList[i].physics,
            markList[i].chemistry,markList[i].total_mark);
       
    }
    
    
    return 0;
}

/*****************************************************************
1. Start
2. Input the Number of students
3.  Declare a Structure with reg_no. , name , mark of 3 subject and total mark.
4.  Read the datas in the structure and calculate total mark as the sum of 3 subject
5.  Print the datas in the structure one by one 
6.  Stop
*****************************************************************/