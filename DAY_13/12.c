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
      default:
      printf("school of linux");
      break;
    case 30:
      printf("thirty\n");
    case 40:
      printf("fourty\n");
      break;
    case 50: 
      printf("fifty\n");
  }
}
