#include<stdio.h>
#include<conio.h>
int main(){
int i,j,temp;
clrscr();
i=6,j=8;
temp=i;
i=j;
j=temp;
printf("%d %d",i,j);
getch();
return 0;
}