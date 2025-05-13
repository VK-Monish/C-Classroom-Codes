#include<stdio.h>
int main()
{
  int i,sum=0,z=1,y;
  scanf("%d",&i);
  for(   ;i>0;   )
  {
    y=i%2;
    i=i/2;
    sum=sum+y*z;
    z=z*10;
  }
  printf("%d",sum);
}

