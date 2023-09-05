/*
Write a program that takes a 2D array as input 
and returns the sum of all the odd row index and even column index elements using a function.
*/

#include<stdio.h>
int sum(int,int,int (*matrix)[]);
int main ()
{
    int result=0,rows,cols;
    printf("enter no.of rows :");
    scanf("%d",&rows);
    printf("\nenter no.of cols : ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    printf("enter matrix elements:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    result=sum(rows,cols,matrix);
    printf("\n RESULT : %d",result);
    return 0;
}
int sum(int rows,int cols,int (*matrix)[cols])
{
    int result;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i%2!=0 || j%2==0)
            {
                result+=*(*(matrix+i)+j);
            }

        }
    }
    return result;
}