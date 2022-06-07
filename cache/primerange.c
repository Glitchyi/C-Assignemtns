#include <stdio.h>
void main(){
	int n1,n2,i=2,flag=420;
	printf("Enter a Range: ");
	scanf("%d%d",&n1,&n2);
	if (n1>n2){
		n1+=n2;
		n2=n1-n2;
		n1=n1-n2;
	}
	for (int j=n1;j!=n2;j++){
		flag=420;
		while(i<=j/2){
			if (j%i==0){
				flag=69;
			}
			
			i++;
		}
		if (flag==69){
			printf("%d not prime\n",j);
		}else{
			printf("%d prime\n",j);
		}
	}
}
