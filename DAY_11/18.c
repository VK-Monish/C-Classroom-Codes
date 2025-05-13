#include<stdio.h>
int main()
{
  int i,sum=0,z=1,y;
  scanf("%d",&i);
  for(   ;i>0;   )
  {
    y=i%10;
    i=i/10;
    sum=sum+y*z;
    z=z*2;
  }
  printf("%d",sum);
}

