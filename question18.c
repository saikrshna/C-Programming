#include <stdio.h>
#include <stdlib.h>

int main(){
    int j,char_count=0,word_count=0;
    char sentence[1000];
    char character;
    FILE *ptr = NULL;

    ptr = fopen("file.txt","w");

   printf("Enter the Sentences One by One: \n");
    
    if(ptr == NULL){
        printf("Error");
        exit(0);
    }

    for(j=0;j<10;j++){
        fgets(sentence,100,stdin);
        fprintf(ptr,"%s",sentence);
    }

    fclose(ptr);

    ptr = fopen("file.txt","r");

    if(ptr == NULL){
        printf("Error");
        exit(0);
    }
    
    character=fgetc(ptr);
 
    printf("Content in the file are : \n");
    printf("\n...............................................\n");
    while (character !=EOF)
    {
        printf("%c",character);
        character=fgetc(ptr);
    }
     printf("\n...............................................\n");
    
    fclose(ptr);

    ptr = fopen("file.txt","r");

    if(ptr == NULL){
        printf("Error");
        exit(0);
    }
    
    character=fgetc(ptr);
    
    while (character !=EOF)
    {
        char_count++;
        if(character==' '||character == '\t' || character == '\n' || character == '\0'){
            word_count++;
        }
        character=fgetc(ptr);
    }

 printf("\n\t     Content in the File\n");
    if(char_count==0){
        printf("\tFile is empty");
    }else{
        printf("\n\tCharacter Count in this file = %d\n",char_count);
        printf("\n\t  Word Count in this file = %d\n",word_count);
    }
    
    return 0;
}

/****************************************************************
1. Start
2. Open a file in the write mode
3. Write 10 sentences in that file by reading from the keyboard
4. Close the file
5. Open it again the read mode
6. Print the contents of the file
7. Close it and open again
8. Count the number of characters and words in that file.
9. Print the result
10.Stop

****************************************************************/