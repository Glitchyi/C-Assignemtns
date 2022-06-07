#include <stdio.h>
void main(){
	int n,i=2,flag=420;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n/2){
		// printf("inside loop");
		if (n%i==0){
			flag=69;
		}
		i++;
	}
	if (flag==69){
		printf("Its not a prime number you dum dum!!\n");
	}else{
		printf("Fine, its a prime number you win.(￣y▽￣)╭ Ohohoho.....\n");
	}
}
