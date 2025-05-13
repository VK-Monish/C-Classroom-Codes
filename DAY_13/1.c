#include<stdio.h>
int main()
{
  int x;
  float y,z;
  printf("if 1 enter it add the value\n");
  printf("if 2 enter it sub the value\n");
  printf("if 3 enter it multi the value\n");
  printf("if 4 enter it divid the value\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      {
	printf("enter the x and y value");
	scanf("%f %f",&y,&z);
	printf(" add value %f",y+z);
      }
      break;
    case 2:
      {
	printf("enter the x and y value");
	scanf("%f %f",&y,&z);
	printf(" multi value %f",y-z);
      }
      break;
    case 3:
      {
	printf("enter the x and y value");
	scanf("%f %f",&y,&z);
	printf(" multi value %f",y*z);
      }
      break;
    case 4:
      {
	printf("enter the x and y value");
	scanf("%f %f",&y,&z);
	printf(" multi value %f",y/z);
      }
  }
}
