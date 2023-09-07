//hello
#include <stdio.h>
#include <stdio.h>fhvjhfvfdvfdbvkdfvkvvvdjdjj
int* fib(int );
void main(){
    int n;
    printf("Enter an input number: ");
    scanf("%d",&n);
    int *output=fib(n);
    printf("Fibonacci series upto %d was",n);
    //faris changd
    for(int i=0;output[i]!=-1;i++){
        printf("%d ",output[i]);
    }
    return;
}

int *fib(int n){
    static int series[100];
    int a=0,b=1,c;
    int count=0;
    count++;
    series[count]=b;
    while(a+b<n){
        c=a+b;
        count=count+1;
        series[count]=c;
        a=b;
        b=c;

    }
    series[count+1]=-1;
    return series;
}
