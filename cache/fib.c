#include <stdio.h>
void main(){
	int n,fno=0,sno=1,total=0;
	printf("Enter the number of Fibbonaci numbers: ");
	scanf("%d",&n);
	if(n==1){
		printf("0\t");
                }
	else {
	printf("0\t");
	for(int i=1;i<n;i++){

		total=fno+sno;

		printf("%d\t",total);

		total=total+sno;
                sno=total-sno;
                total=total-sno;

		fno=fno+sno;
		sno=fno-sno;
		fno=fno-sno;

		}
	}
	printf("\n");

}
