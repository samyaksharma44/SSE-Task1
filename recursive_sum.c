#include <stdio.h>

int sum1(int n){
    if(n==1){
        return 1;
    }
    else{
        return sum1(n-1) + n;
    }
}

int main(){
    printf("The sum of first 5 natural numbers is: %d", sum1(5));
}