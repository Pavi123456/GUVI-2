#include<stdio.h>
int main()
{
int t,k,a[10],i,j;
scanf("%d%d",&n,&k);
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
for(j=k-1;j<t;j++)
{
printf("%d ",a[j]);
}
for(i=0;i<=k-2;i++)
{
printf("%d ",a[i]);
}
}
