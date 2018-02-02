#include<stdio.h>
#include<coinio.h>
int main()
{
int low,high,value,q;
printf("enter two numbers(interval): ");
scanf("%d %d",&low,&high);
printf("even number between %d and %d interval:",low,high);
for(q=low;q<=high;q++)
{
value=q%2;
if(value!=0)
{
printf("%d",q);
}
}
getch()
}
