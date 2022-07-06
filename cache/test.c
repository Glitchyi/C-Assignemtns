#include <stdio.h>
void main(){
	float a=2.54234,b=7.9876;
	int y=(b==0)?a:(a>b)?(b):a;
	printf("%d",y);
}
