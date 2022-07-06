// Write an algorithm to find the sum of digits of a number
#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0){
        sum += n%10;
        n /= 10;
    }
    printf("Sum of digits of the number is: %d",sum);
}