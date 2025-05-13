#include<stdio.h>
int main()
{
  int x,y,sum=0,z=1;
  printf("choose your choice\n");
  printf(" 1.binary to decimal\n");
  printf(" 2.decimal to binary\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
      {
	printf("enter the binary num");
	scanf("%d",&x);
	while(x>0)
	{
	  y=x%10;
	  sum=sum+y*z;
	  z=z*2;
	  x=x/10;
	}
	printf("%d",sum);
      }
      break;
    case 2:
      {
	printf("enter the decimal num");
	scanf("%d",&x);
	while(x>0)
	{
	  y=x%2;
	  sum=sum+y*z;
	  z=z*10;
	  x=x/2;
	}
	printf("%d",sum);
      }
  }
}
