#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter the Size of Array 1 and Array 2\n");
    scanf("%d%d",&m,&n);
    int A[m],B[n];
    printf("\nEnter the elments of Array 1\n");
    for(int i=0;i<m;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&A[i]);
    }
     printf("\nEnter the elments of Array 2\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&B[i]);
    }
    int C[m],r=0;
    for ( int i = 0; i < m;i++)    
    {
        for (int j = 0; j < n; j++)
        {
            if(A[i]==B[j])
            {
               C[r]=B[j];
               r++;
            }
        }
        
    }
    printf("\nIntersection of Array1 and array2 \n");
    for (int i = 0; i < r; i++)
    {
        printf("%d\t", C[i]);
    }
    return 0;
}