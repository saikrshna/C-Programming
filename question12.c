#include <stdio.h>

int main(){

char string1[20],string2[20],con_string[20];
int num,option,length1;
int length2,i,count;

printf("Enter the first string:");
scanf("%s",string1);
printf("Enter the second string:");
scanf("%s",string2);

length1=0;
            for(i=0;string1[i]!='\0';i++){
            length1++;
         }
printf("\nFirst String Strength = %d\n",length1);

length2=0;
            for(i=0;string2[i]!='\0';i++){
            length2++;
         }
printf("\nSecond String Strength = %d\n",length2);

printf("\nComparison of two strings: ");

if(length1!=length2){
       printf("Strings are not equal");
}else{
       for(i=0;i<length1;i++){
           if(string1[i]==string2[i]){
           count++;
        }
}

   if(count == length1){
      printf("Strings are equal");
}else{
      printf("Strings are not equal");
   }
}

      for(i=0;i<length1;i++){
        con_string[i]=string1[i];
   }
      for(i=length1;i<length1+length2;i++){
        con_string[i]=string2[i-length1];
   }
      con_string[i]='\0';
        printf("\n\nConcatinate string = %s",con_string);

       for(i=0;i<length1;i++){
          string2[i]=string1[i];
    }
       string2[i]='\0';
       printf("\n\nResult of Copying String 1 to string 2: \n\t\t\tstring 2=%s",string2);

      return 0;
      }

      /**************************************************************************
       1.Start

       2. Read the two strings from the user.

       3. To find the length of the string using a for loop running upto null character
        ,and print the length of each string.

       4. For comparing two string at first , check whether length of strings is equal or
         not , If lengths are not equal print strings are not equal. Else compare each
         Character of the string , if the character increase the value of count increase one
         By one and check whether the count and length of string are equal then
         Print Strings are equal . else print strings are not equal

       5. For concatenating two strings, at first just initialize another string and the
         Value of first string to newly initialized string. And run a for loop starting
         From length of first string to sum of length of two strings and assign the
         Characters in the second string to the initialized string. And print the string.

       6. For coping first string to second string , run a for loop upto the length of
         First string , and assign the character of first string to the second string
         And print the second string.

       7. Stop

       *********************************************************************************/