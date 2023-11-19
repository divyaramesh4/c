#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
clrscr();
i=6,j=8;
i=i+j;
j=i-j;
i=i-j;
printf("%d %d",i,j);
getch();
return 0;
}