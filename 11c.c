#include<stdio.h>
#include<conio.h>
void main()
{
int aa,p,i,j,c=0;
clrscr();
printf("\n Enter the snumber of students:");
scanf("%d",&aa);
p=2*aa;
for(i=0;i<p;i++)
{
for(j=i+1;j<=p;j++)
 {
 printf("\n%d\t%d\n",i,j);
 c++;
 }  }
 printf("the daily walk combination is %d",c);
 getch();
}
