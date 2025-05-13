#include<stdio.h>
int main()
{
  char x,i=1,sum=0;
  for(    ;'Y'==getchar();getchar())
  {
    sum=sum+i;
    printf("do you to countine:");
  }
  printf("%d",sum);
}
