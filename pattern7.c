#include <stdio.h>

int main() {
    int number_lines;
    printf("Enter the number of rows: ");
    scanf("%d", &number_lines);

    int i, j, n = 1;
    for (i = 1; i <= number_lines; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}
