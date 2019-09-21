#include <stdio.h>
#include<math.h>
int rev(int n);

int main()
{
 int n;
 scanf("%d",&n);
 printf("%d",rev(n));
}

int rev(int n)
{
 int rev,rem,i,temp;
 rev=0;rem=0;i=0;
 temp=n;
 while(temp!=0) 
  {
    temp=temp/10;
    i++;
  }
 while(n!=0)
  {
    i--;
    rem=n%10;
    rev=rev+rem*pow(10,i);
    n=n/10;
  }
 return rev;
}