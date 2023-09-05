#include <stdio.h>
int sum(int (*matrix1)[20],int (*matrix2)[20],int a,int b,int c,int d);
void main(){
    int a,b,c,d,i,j;
    int matrix1[20][20],matrix2[20][20];
    printf("enter the rows and colums of first matrix:");
    scanf("%d %d",&a,&b);
    
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            printf("enter data in [%d][%d]",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the rows and colums of second matrix:");
    scanf("%d %d",&c,&d);
    for(i=1;i<=c;i++){
        for(j=1;j<=d;j++){
            printf("enter data in [%d][%d]",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int output=sum(matrix1,matrix2,a,b,c,d);
    printf("sum is %d",output);


}

int sum(int (*matrix1)[20],int (*matrix2)[20],int a,int b,int c,int d){
    int x,y,output;
    printf("enter the corresponding sum of row and column we needed");
    scanf("%d %d",&x,&y);
    if (x<=a && x<=c){
        if (y<=b && y<=d){
            output=*(*(matrix1+x)+y)+*(*(matrix2+x)+y); 
        }
        return output;
    }
    else{
        return -1;
    }
}