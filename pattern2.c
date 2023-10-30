#include<stdio.h>
int main(){
    int number_lines,row,col;
    printf("Enter the no. of rows");
    scanf("%d",&number_lines);
    for ( row=0;row <=number_lines;row++) 
    {
        for ( col = 0; col <number_lines-row; col++)
        {
            printf(" ");
        }
        for ( col = 0; col < row; col++)
        {
            printf("*");
        }
        
        
        printf("\n");
    }
    return 0;
    
}