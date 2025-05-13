#include<stdio.h>
int main()
{
  int i=0,j;
  for(i=1,j=1;j<=5;i++,j++)
  {
    if(i==j)
      break;
    printf("%d %d\n",i,j);
  }
}

