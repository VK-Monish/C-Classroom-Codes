#include<stdio.h>
int main()
{
  int i,j=1;
  for(i=0;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
      if(i==j)
	break;
    printf("%d %d\n",i,j);
    }
  }
}

