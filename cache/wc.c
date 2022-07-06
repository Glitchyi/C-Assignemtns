//Read a string ending with $ symbol and store it in an array and count the number of consonants and vowels and spaces in the string.
void main(){
    char vow[]={'a','e','i','o','u'};
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    int j=0;
    while(str[j]='\0'){
    for (int i=0;i<26;i++){
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[j]==ref[i]){
                count++;
            }
        }
        printf("%c: %d\n",ref[i],count);
    }

    }
    
}