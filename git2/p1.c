#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a;
int n=10;
int *i;
a=(int*)calloc(n,sizeof(int));
if(a==NULL)
{
printf("memory is not available");
}
else
{
printf("enter the numbers");
/*for( i=a;i<a+n;i++)
{
scanf("%d",i);
}
for( i=a+n-1;i>=a;i--)
{
printf("%d\t",*i);
}
}*/
n=13;
a=(int*)realloc(a,n*sizeof(int));
for( i=a;i<a+n;i++)
{
scanf("%d",i);
}
for( i=a+n-1;i>=a;i--)
{
printf("%d\t",*i);
}
}
}
