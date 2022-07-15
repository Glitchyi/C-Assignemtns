//Read a string (word), store it in an array, and check whether it is a palindrome word or not.
#include <stdio.h>
void main(){
    char word[20];
    printf("Enter a word: ");
    scanf("%s",word);
    int i=0,j=0,k=0,flag=0;
    while(word[i]!='\0'){
        i++;
    }
    for(j=0;j<i;j++){
        k=i-j-1;
        if(word[j]==word[k]){
            continue;
        }else{
            printf("%s is not a palindrome\n",word);
            flag+=1;
            break;
        }
        
    }
    if(flag==0){
        printf("%s is a palindrome\n",word);
    }
}