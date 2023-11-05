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
    int C[m+n],r=0;
    for(int i =0;i<m;i++)
    {
     C[r]=A[i];
     r++;  
    }
    int copy=0;
    for(int i=0;i<n;i++)
    {
        copy=0;
        for(int j=0;j<m;j++)
        {
            if(B[i]==A[j])
            {
copy=1;
break;
            }
        }
if(copy==0)
{
    C[r]=B[i];
    r++;
}
    }
  
    for (int i = 0; i < r; i++)
    {
        printf("%d\t", C[i]);
    }
    return 0;
}