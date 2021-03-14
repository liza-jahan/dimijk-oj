#include<stdio.h>
#include<math.h>
int main()
{
  int t,n,d;
  scanf("%d",t);
  while(t--)
  {
    scanf("%d",&n);
    d = sqrt(n);
    if(n==d*d)
    {

        printf("yes");
    }

     else
     {
         printf(" no\n");
     }}
}
