#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sum(int n)
{
    int s=0 , rem=0;


        while(n!=0)
        {
            rem=n%10;
            s=s+rem;
            n=n/10;
        }
        if(s>9)
        {
            n=s;
        }
        else{
            printf("%d",s);
            exit(0);
        }
        return(sum(s));


}
void main()
{
    int n=0;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",sum(n));
}
