//find the largest of 3 numbers
#include <stdio.h>
void main(){
	int a,b,c,max;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		max=a;
	else if(b>a && b>c)
		max=b;
	else
		max=c;
	printf("The largest number is %d",max);
}