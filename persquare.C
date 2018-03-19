#include<stdio.h>
int main()
{
int s,p,square,i;
printf("enter two numbers:");
scanf("%d%d",&s,&p);
square=(s*p);
for(i=0;i<=square;i++)
{
if(square==(i*i))
{
printf("yes perfect square");
}
}
return 0;
}
