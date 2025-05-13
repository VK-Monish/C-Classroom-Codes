#include<stdio.h>
int main()
{
  int i=1;
  for( ; ; )
  {
    if(i==3)
      break;
    printf("%d",i++);
  }
  printf("%d\n",i);
}
