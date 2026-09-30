#include <stdio.h>
int main(){
    printf("Enter a number: ");
    int n, factors=0, i=1;
    scanf("%d", &n);

    while(i<=n){
        if (n%i == 0){
            factors+=1;
        }
        i++;
    }
    if(n==0 || n==1){
        printf("The number %d is neither a prime number nor a composite number", n);
    }
    else if(factors==2){
        printf("The number %d is a prime number", n);
    }
    else{
        printf("The number %d is not a prime number", n);
    }
}