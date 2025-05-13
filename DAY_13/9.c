#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  switch(x)
  {
    case 10:
      printf("ten\n");
      break;
    case 20:
      printf("twenty\n");
    case 30:
      printf("thirty\n");
    case 40:
      printf("fourty\n");
      break;
    default:
      printf("school of linux");
  }
}
