/* Write a menu driven program for performing matrix addition, multiplication and finding the transpose. Use functions to
(i) read a matrix,
(ii) find the sum of two matrices,
(iii) find the product of two matrices,
(iv) find the transpose of a matrix and
(v) display a matrix
*/
#include <stdio.h>

void main(){
    int choice;
    printf("1. Addition of two matrices\n");
    printf("2. Multiplication of two matrices\n");
    printf("3. Transpose of a matrix\n");
    printf("4. Display a matrix\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Addition of two matrices\n");
            break;
        case 2:
            printf("Multiplication of two matrices\n");
            break;
        case 3:
            printf("Transpose of a matrix\n");
            break;
        case 4:
            printf("Display a matrix\n");
            break;
        default:
            printf("Invalid choice\n");
    }

}
int add(){
    
}