#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
   int n,s=0,rem;
   printf("Enter a Number \n");
   scanf("%d",&n);
   for( ; ; )
   {
       while(n>0)
       {
            rem=n%10;
            s=s+rem;
            n=n/10;
        }
        if(s>9)
        {
            n=s;
            s=0;
        }
        else
        {
            break;
       }
   }
   printf("%d",s);
}
