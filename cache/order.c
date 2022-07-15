//alphabetical order of the characters in the string
#include <stdio.h>
void main(){
    char word[120];
    int i=0,j=0,k=0,flag=0;
    printf("Enter a word: ");
    scanf("%[^\n]s",word);
    while(word[i]!='\0'){
        i++;
    }
    for(j=0;j<i;j++){
        for(k=j+1;k<i;k++){
            if(word[j]>word[k]){
                flag=1;
                char temp=word[j];
                word[j]=word[k];
                word[k]=temp;
            }
        }
    }
    if(flag==1){
        printf("The alphabetical order of the characters in the string is: ");
        for(j=0;j<i;j++){
            printf("%c",word[j]);
        }
    }else{
        printf("The string is already in alphabetical order");
    }
}