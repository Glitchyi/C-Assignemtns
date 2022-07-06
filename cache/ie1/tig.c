// Write a C program to accept 3 sides of a triangle from the user and check
// whether the triangle is Equilateral, Isosceles or Scalene. (Hint: Equilateral - All
// 3 sides are equal
#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c){
        printf("The triangle is Equilateral");
    }
    else if (a==b || b==c || a==c){
        printf("The triangle is Isosceles");
    }
    else{
        printf("The triangle is Scalene");
    }
}
// Rick roll lyrics
// never gonna give you up
// never gonna let you down
// never gonna run around and desert you
// never gonna make you cry
// never gonna say goodbye
// never gonna tell a lie and hurt you
