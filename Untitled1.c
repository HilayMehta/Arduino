#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int a[100][100],b[100][100],i,j,m,n,c[100][100],p,q,sum1=0,sum2=0,temp,k;
    float norm1,norm2;
    printf("Enter the Dimension 1st of matrices");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of 1st matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix 1 is \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",a[i][j]);
                }
                 printf("\n");
            }
    printf("Enter the Dimension of 2nd matrices");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("Multiplication of matrices not possible");
        exit(0);
    }
        printf("Enter the elements of 2nd matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("The matrix 2 is \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d \t",b[i][j]);
                }
                 printf("\n");
        }




    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
            printf("\n The product matrix is \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                    printf("%d \t",c[i][j]);
                }
                printf("\n");
            }
             for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {if(i==j)
                    {sum1=sum1+a[i][j]*a[i][j];}
                }
            }
            norm1=sqrt(sum1);
            printf("%f \n",norm1);
             for(i=0;i<p;i++)
            {
                for(j=0;j<q;j++)
                {if(i==j)
                    {sum2=sum2+b[i][j]*b[i][j];}
                }
            }
            norm2=sqrt(sum2);
             printf("%f \n",norm2);

            printf("The transpose matrix 1 is \n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    printf("%d \t",a[j][i]);
                }
                 printf("\n");
            }

            printf("The transpose matrix 2 is ");
            for(i=0;i<q;i++)
            {
                for(j=0;j<p;j++)
                {
                    printf("%d \t",b[j][i]);
                }
                printf("\n");
            }


}
