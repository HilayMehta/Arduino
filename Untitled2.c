#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int a[100][100],b[100][100],i,j,m,n,c[100][100],p,q,k,det1,det2;
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
            printf("The determinant is: \n");
            if(m=q==2)
            {
                det1= (c[0][0] * c[1][1]) - (c[0][1] * c[1][0]);
                printf("%d",det1);
            }
            else if(m=q==3)
            {
                det2=(c[0][0]*(c[1][1]*c[2][2] - c[1][2]*c[2][1])) - (c[0][1]*(c[1][0]*c[2][2] - c[1][2]*c[2][0])) + (c[0][2]*(c[1][0]*c[2][1] - c[1][1]*c[2][0]));
               printf("%d",det2);
            }
            else
            {
                printf("NOT POSSIBLE to calculate determinate");

            }
}
