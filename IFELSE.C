#include<stdio.h>
#include<conio.h>
int main(){
int age;
clrscr();
printf("Enter your age");
scanf("%d",&age);
if(age>=18)
{
printf("Eligible to vote");
}
 else
{
printf("Not Eligible to vote");
}
getch();
return 0;
}