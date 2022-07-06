// Find the sum and average of the numbers in the array.
#include <stdio.h>
void main(){
    int n, flag=0, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    printf("The sum of the elements is: %d\n", sum);
    float avg = (float)sum/n;
    printf("The average of the elements is: %f\n", avg);
    
}