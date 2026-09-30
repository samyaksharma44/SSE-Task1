#include <stdio.h>
int fib(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    printf("Enter the number of terms for Fibonacci series: ");
    int n;
    scanf("%d", &n);

    printf("FIBONACCI SERIES \n");

    for (int i=1; i<=n; i++){
        printf("%d \n", fib(i));
    }
}