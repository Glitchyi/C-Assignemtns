// Write a program to perfom leniar search
#include <stdio.h>
void main(){
    int n, flag=0, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    for(int i=0;i<n;i++){
        if(a[i] == element){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("element found ");
    }
    else{
        printf("element not found\n");
    }
}