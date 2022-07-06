// Write a C program to accept 3 angles of a triangle from the user and check
// whether the triangle is valid or not (Hint: Sum of the angles should be equal to
// 180)
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the angles of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b+c == 180){
        printf("The triangle is valid");
    }
    else{
        printf("The triangle is invalid");
    }
}