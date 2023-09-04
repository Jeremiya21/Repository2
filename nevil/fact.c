#include<stdio.h>
  long long int Fact(int a){
   long long int b;
    if(a==0){
        return 1;
    }
    else if(a<0){

        printf("ENTER A POSITIVE NUMBER!!!");
        return -1;
    }
    else
       b = a*Fact(a-1);
       return b;
 }
void main(){
    int a;
    printf("ENTER A NUMBER TO FIND FACTORIAL :");
    scanf("%d",&a);
    printf(" %d! is %lld\n",a,Fact(a));
    Fact(a);
}