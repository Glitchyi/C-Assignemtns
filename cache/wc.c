//Read a string ending with $ symbol and store it in an array and count the number of consonants and vowels and spaces in the string.
#include<stdio.h>
void main()
	{
	int i,l=0,v=0,s=0,c=0;
	char a[20];
	printf("Enter the 1st string: ");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
		{
		if (a[i]=='a' ||a[i]=='e'||a[i]=='i'|a[i]=='o'||a[i]=='u')
		{
		v++;
		}
		else if(a[i]==' ')
		{
		s++;
		}
		else
		{
		c++;
		}
		
	}
	printf("the number of vowels %d\n",v);
	printf("the number of spaces %d\n",s);
	printf("the number of consonants %d\n",c);
	}


