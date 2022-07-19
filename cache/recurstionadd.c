//recursive functiont to find sum of n digits
#include <stdio.h>
void breh();
void main(){
    breh();
    breh();
    breh();
    breh();
    breh();
}
void breh(){
   static int sum=0;
   printf("%d\n",sum);
   sum++;
}
