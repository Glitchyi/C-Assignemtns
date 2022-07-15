//recursive functiont to find sum of n digits
#include <stdio.h>
void main(){
    int n,sum=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum=sum+recursion(n);
    printf("The sum of the digits is %d\n",sum);
}
int recursion(int n){
    if(n==0){
        return 0;
    }else{
        return (n%10)+recursion(n/10);
    }
}