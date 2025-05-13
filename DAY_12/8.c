#include<stdio.h>
int main()
{
  char x;
  for(   ;x=getchar();   )
  {
    printf("%c",x);
    x=getchar();
    printf("%d",x);
  }
}
