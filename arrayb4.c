#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the Size of Array A and Array B\n");
    scanf("%d %d", &m, &n);
    int A[m], B[n];
    printf("\nEnter the elements of Array A\n");
    for (int i = 0; i < m; i++)
    {
        printf("Element %d = ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("\nEnter the elements of Array B\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d = ", i + 1);
        scanf("%d", &B[i]);
    }
    int C[m + n], r = 0;
    int copy;
    for (int i = 0; i < m; i++)
    {
        copy = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                copy = 1;
                break;
            }
        }
        if (copy == 0)
        {
            C[r] = A[i];
            r++;
        }
    }
    printf("The Difference of the two arrays is: ");
    for (int i = 0; i < r; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}
