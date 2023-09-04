/*
Write a program that takes a 2D array as input 
and returns the sum of all the odd row index and even column index elements using a function.*/
#include<stdio.h>
int sum(int (*matrix)[]);
int main ()
{
    int result=0,rows,cols;
    printf("enter no.of rows :");
    scanf("%d",&rows);
    printf("\nenter no.of cols : ");
    scanf("%d",%cols);
    int matrix[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int (*ptr_matrix)[cols]=&matrix;
    result=sum(ptr_matrix);
    return 0;
}
int sum(int (*matrix)[cols])
{
    int result;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i%2!=0 && j%2==0)
            {
                result+=*(*(matrix+i)+j);
            }

        }
    }
    return result;
}