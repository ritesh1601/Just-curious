#include <stdio.h>

int main()
{
    int m,n,sum=0,k;
    printf("Enter the Size of Array A and Array B\n");
    scanf("%d%d",&m,&n);
    int A[m],B[n];
    printf("\nEnter the elments of Array A\n");
    for(int i=0;i<m;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&A[i]);
    }
     printf("\nEnter the elments of Array B\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&B[i]);
    }
    
    printf("\npossible combinations x+y=z \n\n");
    for ( int i = 0; i < m;i++)    
    {
        for (int j = 1; j < m; j++)
        {
            sum=A[i]+A[j];
            for(int k=0;k<n;k++)
            {
                if (sum==B[k])
                {
                   printf("%d+%d=%d",A[i],A[j],B[k]);
                   printf("\n"); 
                }
                
            }
        }
        
    }
    return 0;
}