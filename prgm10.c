#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
long long n;
int count=0;
printf("enter value");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("%d",count);
getch();
}
