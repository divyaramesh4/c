#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
clrscr();
printf("Enter values for a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
printf("a is greater than b");
}
 else if(b>c)
{
printf("b is greater than c");
}
else
{
printf("c is greater than a");
}
getch();
return 0;
}