#include<stdio.h>
#include<conio.h>
int main(){
int i=6,j=6,k=6,l=6;
clrscr();
i=i++,++j,k--,--l;
printf("%d %d %d %d ",i,j,k,l);
getch();
return 0;
}