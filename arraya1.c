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
        if (Array[i]<0)
        {
           Array[i]=-Array[i];
        }
        
        sum+=Array[i];
    }
    printf("The Absolute Sum of all the elments is %d\n",sum);
    return 0;
}