#include<stdio.h>
#include<math.h>
int factorial( int a){
    int t=1;
    for(int i =1;i<=a;i++){
        t=t*i;
    }
    return t;
}
int  combination(int n , int r){
    int c;
    c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;

}
int main()
{
    int number_lines,row,col,p;
    printf("Enter the no. of rows");
    scanf("%d",&number_lines);
    for ( row=0;row <=number_lines;row++) 
    {
        for ( col = 0; col <=number_lines-row; col++)
        {
            printf(" ");
        }
        for ( col = 0; col <=row; col++)
        {
            if(col==0||row==0)
                 p=1;
            else{
                p=combination(row,col);
            }    
            printf("%d ",p); 
        }
        
        
        printf("\n");
    }
    return 0;
    
}