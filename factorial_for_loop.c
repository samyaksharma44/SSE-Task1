#include <stdio.h>
int main(){
    printf("Enter a number: ");
    int n, prod = 1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        prod *= i;
    }
    printf("The factorial of %d is: %d", n,prod);
}