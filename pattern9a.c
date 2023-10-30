#include <stdio.h>

int main()
{
    int number_lines, row, col, p, t;
    printf("Enter the no. of rows: ");
    scanf("%d", &number_lines);
    for (row = 0; row <= number_lines; row++)
    {
        t = 1;
        for (col = 0; col <= number_lines - row; col++)
        {
            printf(" ");
        }
        for (col = 0; col <= row; col++)
        {
            if (col == 0 || row == 0)
                p = 1;
            else
            {
                int n = row;
                int r = col;
                int i, t1 = 1, t2 = 1, t3 = 1;
                for (i = 1; i <= n; i++)
                {
                    t1 = t1 * i;
                }
                for (i = 1; i <= r; i++)
                {
                    t2 = t2 * i;
                }
                for (i = 1; i <= n - r; i++)
                {
                    t3 = t3 * i;
                }
                p = t1 / (t2 * t3);
            }
            printf("%d ", p);
        }
        printf("\n");
    }
    return 0;
}
