#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number of elements you will take\n(Should be less than 25)\n= ");
    scanf("%d", &size);
    int Array[size];
    printf("Enter the numbers\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d = ", i + 1);
        scanf("%d", &Array[i]);
        printf("\n");
    }
    int t, j;
    for (int i = 0; i < size; i += 2) 
    {
        if (i + 1 < size) 
        {
            j = i + 1;
            t = Array[j];
            Array[j] = Array[i];
            Array[i] = t;
        }
    }
    printf("Array after swapping\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", Array[i]);
    }
    return 0;
}
