// Initialize 2 1 dimensional array with the same number of elements. Find the sum of corresponding array elements and store it in another array.
void main(){
    int n, flag=0, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n], b[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d",a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}