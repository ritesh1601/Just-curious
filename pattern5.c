#include<stdio.h>
int main(){
    int number_lines,row,col;
    char I='A';
    printf("Enter the no. of rows");
    scanf("%d",&number_lines);
    for ( row=0;row <number_lines;row++) 
    {
        for ( col = 0; col <number_lines-row; col++)
        {
            printf(" ");
        }
        for ( col =0, I='A'+row; col < row,I>='A'; col++,I--)
        {
            printf("%c",I);
        }
        
        
        printf("\n");
    }
    return 0;
    
}