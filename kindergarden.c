#include<stdio.h>
#include<conio.h>
void main()
{
int b,n1,i=1,j,c=0;
scanf("%d",&b);
n1=2*b;
while(i<n1)
{
for(j=i+1;j<=n1;j++)
{
printf("%d%d\n",i,j);
c++;
}
i++;
}
printf("no pair %d",c);
getch();
}
