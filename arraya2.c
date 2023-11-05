#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements you will take \n(Should be less than 25)\n= ");
    scanf("%d",&size);
    int Array[size],sum=0;
    printf("Enter the numbers\n");
    for (int i=0;i<size;i++)
    {
        printf("Element %d = ",i+1);
        scanf("%d",&Array[i]);
        printf("\n");
    }
    int B[size],C[size],j=0,k=0;
    for(int i=0;i<size;i++)
    {
        if(Array[i]<0)
        {
           B[j]=Array[i];
           j++;
        }
        else
        {
          C[k]=Array[i];
          k++;
        }
    }
    printf("\nYour Input elements\n\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",Array[i]);
    }
    printf("\nPositive elements\n\n");
    for(int i=0;i<k;i++)
    {
        printf("%d\t",C[i]);
    }
    printf("\nNegative elements\n\n");
    for(int i=0;i<j;i++)
    {
        printf("%d\t",B[i]);
    }
    return 0;
}     