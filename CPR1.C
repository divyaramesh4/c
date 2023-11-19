#include<stdio.h>
#include<conio.h>
main(){
int i,j,k,l,m,n,o;
clrscr();
printf("enter value of i and j \n");
scanf("%d %d",&i,&j);
k=i+j;
printf("sum of %d and %d is %d \n",i,j,k);
l=i-j;
printf("subtraction of %d and %d is %d \n",i,j,l);
m=i*j;
printf("multiplication of %d and %d is %d \n",i,j,m);
n=i/j;
printf("division of %d and %d is %d \n",i,j,n);
o=i%j;
printf("remainder of %d and %d is %d \n",i,j,o);

getch();
return 0;
}