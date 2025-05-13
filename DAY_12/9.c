#include<stdio.h>
int main()
{
  char x,i=1;
  for(   ;x=getchar();   )
  {
    printf("%c",x);
    x=getchar();
    printf("%c",x,i++);
  }
}
