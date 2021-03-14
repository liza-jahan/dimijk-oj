#include<stdio.h>
int main()
{
  int i,t,a,fact=1;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&a);
      for(i=1;i<=a;i++)
      {


        fact = fact*i;}


   printf("%d\n",fact);}

}
