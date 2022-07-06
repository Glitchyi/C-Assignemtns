#include <stdio.h>
void main()
{
  char str1[20],str2[20],str3[40];
  int i=0,j=0;
  printf("Enter string1:");
  scanf("%s",str1);
  printf("Enter string2:");
  scanf("%s",str2);
  while (str1[i]!='$')
  {
      str3[j]=str1[i];
      i++;
      j++;
  }
  i=0;
  while (str2[i]!='$')
  {
      str3[j]=str2[i];
      i++;
      j++;
  }
 //str3[i]='\0';
  i=0;
printf("\n");
  while (j>0)
  {
      printf("%c",str3[i]);
    i++;
      j--;
  }
//  printf("New string is: %s", str3);
}