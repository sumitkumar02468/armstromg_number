#include<stdio.h>
#include<math.h>
void main()
{
int n,i,sum=0,temp=0;
int c=0,p=0,tamp=0;
printf("Enter a number you want to cheak armstrong or not\n");
scanf("%d",&n);
tamp=n;
while(tamp!=0)
{
tamp=tamp/10;
p++;
}
temp=n;
while(temp>0)
{
c=temp%10;
temp=temp/10;
sum+=pow(c,p);
}
if(sum==n)
printf("The number %d is armstrong number\n",sum);
else
printf("The number %d is not armstrong number\n",sum);
}
