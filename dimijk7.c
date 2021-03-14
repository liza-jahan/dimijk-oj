#include<stdio.h>
#include<string.h>
int main()
{ int t,i;
scanf("%d",&t);
while(t--)
{
   for(i=0;i<10000;i++)
   { int i,count,len;
       char s[100];
       {
           scanf("%[\n]",s);
           count =0;
           len = strlen(s);
           for(i=0;i<len;i++)

             if(s[i]=='')
             {
                count++;}



       }



   printf("%d",count);}


}








