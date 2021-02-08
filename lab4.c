#include<stdio.h>
int main()
{
long long a=0,b=0,c=0;
scanf("%lld %lld",&a,&b);
if(a>0&&b>0)
{
  c=(b*2)-a;
}
printf("%lld",c);
return 0;
}
