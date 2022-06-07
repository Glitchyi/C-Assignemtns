#include <stdio.h>
void main(){
	int num,sum=0;
	while (1){
		printf("num: ");
		scanf("%d",&num);
		if (num==0){
			break;
		}else if(num%2==0){
			continue;
		}else{
		sum+=num;
		}
	}
	printf("%d\n",sum);
}
