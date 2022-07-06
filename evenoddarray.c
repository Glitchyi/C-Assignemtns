// Write a c program to store n numbers into an array. Store all the even numbers in one array and all the odd numbers in another array and print them
void main(){
    int n, flag=0, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int even[n], odd[n];
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even[i] = a[i];
        }
        else{
            odd[i] = a[i];
        }
    }
    printf("Even numbers:");
    for(int i=0;i<n;i++){
        if(even[i]!=0){
            printf("%d ", even[i]);
        }
    }
    printf("\nOdd numbers:");
    for(int i=0;i<n;i++){
        if(odd[i]!=0){
            printf("%d ", odd[i]);
        }
    }
    
}