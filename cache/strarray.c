//read a string and store in an array and check if the string is a palindrome or not
void main (){
    char str[100];
    int i=0,j=0,k=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i]!='\0'){
        i++;
    }
    char str1[i];
    for(j=0;j<i;j++){
        str1[j]=str[j];
    }
    for(k=0;k<i/2;k++){
        if(str1[k]!=str1[i-k-1]){
            printf("String is not a palindrome");
            break;
        }
    }
    if(k==i/2){
        printf("String is a palindrome");
    }
}