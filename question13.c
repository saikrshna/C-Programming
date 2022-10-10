#include <stdio.h>
#include <string.h>

int main () {

    char names[100][100], temp[100];
    int size, num, k;

    printf ("Enter the number of Names:");
    scanf ("%d", &size);

    printf ("Enter the names one by one:");
    for (num = 0; num < size; num++){
        scanf ("%s", names[num]);
     }

    printf ("\n Entered Names are :");
     for (num = 0; num < size; num++){
        printf ("\t%s", names[num]);
     }

     for (num = 0; num < size - 1; num++){
          for (k = num + 1; k < size; k++){
               if (strcmp (names[num], names[k]) > 0){
                       strcpy (temp, names[num]);
                       strcpy (names[num], names[k]);
                       strcpy (names[k], temp);
                  }
               }
           }

    printf ("\n Names after sorted :");
        for (num = 0; num < size; num++){
           printf ("\t%s", names[num]);
            }
     return 0;
}


/**********************************************************************************
 1.Start
2. Read the number of names from the user
3. Read the Names one by one from the user
4. Print the names
5. Sort the names by bubble sort and using string manipulation functions
(strcmp -for comparing two strings, strcpy -for coping two strings)
6. Print the sorted names
7. Stop
********************************************************************************/