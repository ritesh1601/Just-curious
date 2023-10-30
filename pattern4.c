#include<stdio.h>
int main(){
    int number_lines,row,col;
    printf("Enter the no. of rows");
    scanf("%d",&number_lines);
    for ( row = 0; row <=number_lines; row++)
    {
        for ( col = 0; col <= number_lines-row; col++)
        {
            printf(" ");
        }
        int n;
        for ( col = 0,n=row-1; col < row; col++,n--)
        {
            printf("%d",n);
        }
        for (n=1;col<=2*row-1,n<=row-1;n++,col++ )
        {
        printf("%d",n);
        }
        
    

        printf("\n");
        
    }
    return 0;
    






}
