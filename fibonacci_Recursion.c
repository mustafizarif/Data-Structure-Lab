#include<stdio.h>
int fibonacci(int n,int x,int y){
    if(n==0)
    return 0;
    printf("%d ",x);
    return fibonacci(n-1,y,x+y);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The fibonacci seris is:");
    fibonacci(n,0,1);
    return 0;
}