#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int a[100][100],m,n,i,j,A[5][5],B1,B2,B3,B4,A1,A2,A3,A4,A5,A6,A7,A8,A9,det1,det2;
     printf("Enter the Dimension 1st of matrices");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("The matrix is: \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",a[i][j]);
                }
                 printf("\n");
            }
    if(m=n==2)
    {
        det1= (a[0][0]*a[1][1])-(a[0][1] * a[1][0]);
        B1=a[0][0]/det1;
	  B2=a[0][1]/det1;
	  B3=a[1][0]/det1;
	  B4=a[1][1]/det1;
	  printf("\nInverse of matrix  = \n\t%d\t%d\n\t%d\t%d",B4,-B2,-B3,B1);
    }
    else if(m=n==3)
            {

                det2=(a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])) - (a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])) + (a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]));
                printf("%d",det2);
                A1=(a[1][1]*a[2][2]-a[2][1]*a[1][2])/det2;

                A2=(a[1][2]*a[2][0]-a[1][0]*a[2][2])/det2;
                A3=(a[1][0]*a[2][1]-a[2][0]*a[2][2])/det2;
                A4=(a[0][2]*a[2][1]-a[0][1]*a[2][2])/det2;
                A5=(a[0][0]*a[2][2]-a[0][2]*a[2][0])/det2;
                A6=(a[0][1]*a[2][0]-a[0][0]*a[2][1])/det2;
                A7=(a[0][1]*a[1][2]-a[0][2]*a[1][1])/det2;
                A8=(a[0][2]*a[1][0]-a[0][0]*a[1][2])/det2;
                A9=(a[0][0]*a[1][1]-a[0][1]*a[1][0])/det2;
	  printf("\nInverse of matrix A =\n\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d",A1,A4,A7,A2,A5,A8,A3,A6,A9);
            }
            else
            {
                printf("NOT POSSIBLE to calculate determinate");

            }
}
