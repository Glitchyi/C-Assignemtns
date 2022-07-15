//Read a string (ending with a $ symbol), store it in an array, and count the number of vowels, consonants, and spaces in it.
#include <stdio.h>
void main(){
    char word[120];
    int vov=0,con=0,spc=0;
    printf("Enter a word: ");
    scanf("%[^\n]s",word);
    int i=0,j=0,k=0,flag=0;
    while(word[i]!='\0'){
        i++;
    }
    for(j=0;j<i;j++){
        if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'){
            vov++;
            printf("%c is a vowel\n",word[j]);
        }else if(word[j]==' '){
            spc++;
            printf("%c is a space\n",word[j]);
        }else{
            con++;
            printf("%c is a consonant\n",word[j]);
        }
    }
    printf("The number of vowels is %d\n",vov);
    printf("The number of spaces is %d\n",spc);
    printf("The number of consonants is %d\n",con);
}