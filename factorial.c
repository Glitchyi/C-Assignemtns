// print the factorial of a numer
#include <stdio.h>
void main(){
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        fact *= n;
        n--;
    }
    printf("Factorial of %d is %d", n, fact);
}