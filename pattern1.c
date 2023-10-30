#include<stdio.h>
int main(){
    int number_lines;
    printf("Enter the number of rows");
    scanf("%d",&number_lines);
    int i,j;
    for(i=0;i<=number_lines;i++){
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}