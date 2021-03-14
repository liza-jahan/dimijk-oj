#include<stdio.h>
#include<math.h>
int main()
{
  int first =0,last = 0,t,sum=0,num,c ;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        {

       c = log10(num) ;

      first = num / pow(10,c)  ;

     last  = num %10;
     sum = first + last ;
    }

       printf("%d",sum);


    }

}
