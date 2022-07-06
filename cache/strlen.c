//read a string and finds its length without using library functions
void main(){
    char str[100];
    int i=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i]!='\0'){
        i++;
    }
    printf("Length of the string is: %d",i);
}
