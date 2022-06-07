#include <stdio.h>
void main(){
	int pal,inpu,chck=0,i=0;
	printf("Enter a number: ");
	scanf("%d",&pal);
	inpu=pal;
	while (pal!=0){
	chck*=10;
	chck+=pal%10;
	pal/=10;
	i++;
	}
	if (inpu==chck){
		printf("%d is a palindrome\n",inpu);
	}else {
		printf("srew you\n");
	}
}
