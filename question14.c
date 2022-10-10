#include<stdio.h>
#include<stdlib.h>

int a[50][2],count_lin=0,count_bin=0,n,search,pos=-1;


void linear_search(){
    
    pos = -1;
    for(int i=0;i<n;i++){
		count_lin++;
        if (search == a[i][1]){
            pos=i;
            break;
        }
    }
     pos !=-1 ? printf("\nThe rank of student with mark  %d is %d",search,pos+1):
                printf("\nThe student not found in the list ");
    pos=-1;
    
}

int binary_search(int low,int upper){
	
    if (low > upper) return 0;
    count_bin++;
    int mid = (low+upper)/2;
    if (search == a[mid][1]){
        pos = mid;
        printf("\nThe rank student with mark number %d is %d ",search,pos+1);
        return 0;
        
    }
    if (search < a[mid][1])
        binary_search(low,mid);
    else
        binary_search(mid+1,upper);
    return 0;
}

int main()
{
    
    printf("Number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the register number of student %d: ",i+1);
        scanf("%d",&a[i][0]);
        printf("Enter the mark of student %d: ",i+1);
        scanf("%d",&a[i][1]);
        
    }
   
        printf("\nEnter the Mark to  be searched: ");
        scanf("%d",&search);
        printf("\n linear_search ");
        linear_search();
        printf("\nThe number of comparison in linear search %d",count_lin);
        printf("\nBinary search");
        binary_search(0,n-1);
		printf("\nThe number of comparison in binary search %d",count_bin);
        if(pos==-1) printf("\nThe student not found in the list ");
    return 0;
}

/******************************************************************************
 1. Start
 2. Read the marks and register to 2-d array
 3. Read the marks to be searched
 4. Linear Search (array)
 5. Binary Search (array)
 6. Stop

 Linear search
 1. Start
 2. Loop Through All Elements
 3. If mark = current element, print mark found
 4. count ++
 5. Stop

 Binary Search
 1. Start
 2. mid = lower + higher
 3. If array(mid) = mark;
    print found mark
    return 0;
 4. If array(mid)> mark;
    binary search (lower,mid);
    else
    binary search (mid,higher);

***********************************************************************************/