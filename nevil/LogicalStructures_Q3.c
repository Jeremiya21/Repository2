#include<stdio.h>
int main(){
    long long int x =10;
    long long int y=1;
    for(int i =1;i<=x;i++){
        y*=i;
    }
     printf("%lld\n",y);
    return 0;
}