#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j ;
  clrscr();
  for(i=1;i<=4;i++)
  {
  for (j=1;j<=4;j++)
  {
  if(i==1||i==4||j==1||j==4 )
	printf("* ");
  else
  printf("  ");
  }
  printf("\n");

  }
 getch();
 return 0;
}