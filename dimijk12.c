#include<stdio.h>
int main()
{

  int t;
  scanf("%d",&t);
  while(t--)
  { long long int ans =0,n;
  scanf("%d",&n);
  while(n!=0)
  {
    ans +=n/5;
    n=n/5;
  }
   printf("%d\n",ans) ;}

    return 0;
  }














