#include <stdio.h>

int Arraysum(int a[][3],int r,int c);

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b;
    b =  Arraysum(a,3,3);
    printf("%d",b);
    return 0;
}

int Arraysum(int a[][3],int r,int c){
    int i,j,sum = 0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum = sum + a[i][j];
        }
    }
    return sum;
}
