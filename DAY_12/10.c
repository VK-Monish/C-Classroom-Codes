#include<stdio.h>
int main()
{
  char x,i=1;
  for(getchar();x=getchar();   )
  {
    printf("%c",x);
    x=getchar();
    printf("%d %d",x,i++);
  }
}
